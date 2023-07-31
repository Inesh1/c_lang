#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int pid;
    int burst_time;
    int remaining_time;
    struct Process* next;
} Process;

Process* create(int pid, int burst_time) {
    Process* newProcess = (Process*)malloc(sizeof(Process));
    newProcess->pid = pid;
    newProcess->burst_time = burst_time;
    newProcess->remaining_time = burst_time;
    newProcess->next = NULL;
    return newProcess;
}

void end(Process** head, Process** tail, Process* newProcess) {
    if (*head == NULL) {
        *head = newProcess;
        *tail = newProcess;
        (*tail)->next = *head;
    } else {
        (*tail)->next = newProcess;
        *tail = newProcess;
        (*tail)->next = *head;
    }
}

void completion(Process* head, int time_quantum) {
    Process* curr = head;
    int remaining_processes = 0;
    do {
        remaining_processes++;
        curr = curr->next;
    } while (curr != head);
    int* completion_time = (int*)malloc(remaining_processes * sizeof(int));
    int* completed = (int*)malloc(remaining_processes * sizeof(int));
    int current_time = 0;
    int completed_processes = 0,i=0;
    for(i = 0; i < remaining_processes; i++) 
	{
        completion_time[i] = 0;
        completed[i] = 0;
    }
    while (completed_processes < remaining_processes) {
        curr = head;
        do {
            if (curr->remaining_time > 0) {
                if (curr->remaining_time <= time_quantum) {
                    current_time += curr->remaining_time;
                    curr->remaining_time = 0;
                    completion_time[curr->pid] = current_time;
                    completed[curr->pid] = 1;
                    completed_processes++;
                } else {
                    current_time += time_quantum;
                    curr->remaining_time -= time_quantum;
                }
            }
            curr = curr->next;
        } while (curr != head);
    }
    i=0;
    for (i = 0; i < remaining_processes; i++) {
        printf("\nProcess %d completed at %d\n", i, completion_time[i]);
    }

    free(completion_time);
    free(completed);
}

int main() {
    Process* head = NULL;
    Process* tail = NULL;
    int ch,c=0,bt,time_quantum = 10,i;
    printf("\tMenu\n1. Insert process\n2. Start process\n3. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        	printf("Enter Burst Time for Process ID.%d :",c);
        	scanf("%d",&bt);
            end(&head, &tail, create(c, bt));
            c++;
            break;
        case 2:
        	printf("Process Starts");
        	for(i=0;i<c;i++)
        	{
        		printf("\nProcess %d started at %dms\n",i,i*10);
			}
            completion(head, time_quantum);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n");
    }
    return 0;
}
