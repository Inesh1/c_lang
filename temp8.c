#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
    int id,time;
    struct linkedlist *next;
}nodeprocess;


nodeprocess* createnode(){
    static int id=1;
    nodeprocess *temp=malloc(sizeof(nodeprocess));
    printf("cpu burst : ");
    scanf("%d",&temp->time);
    temp->id=id++;
    temp->next=NULL;
    return temp;
}
nodeprocess* insert(nodeprocess *head){
    nodeprocess *temp=createnode();
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    head = temp;
    return head;
}
nodeprocess* delete(nodeprocess *head){
    nodeprocess *curr=head;
    if(head==NULL) return head;
    if(head == head->next){
        free(head);
        return NULL;
    }
    curr = curr->next;
    head->id = curr->id;
    head->time=curr->time;
    head->next = curr->next;
    free(curr);
    return head;
}
nodeprocess* process(nodeprocess *head){
    int time_quantum = 10, c_time = 0;
    while(head!=NULL){
        if(head->time<=time_quantum){
            c_time+=head->time;
            printf("Process %d completed at %d\n",head->id,c_time);
            head = delete(head);
        }
        else{
            c_time+=time_quantum;
            head->time-=time_quantum;
            head = head->next;
        }
    }
    return head;
}
void main(){
    nodeprocess *head=NULL;
    int ch,c=1,i;
    do{
        printf("1. insert\n2. process start\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                head = insert(head);
				c++; 
				break;
            case 2 :
                for(i=1;i<c;i++)
                {
                	printf("Process %d started at %dms\n",i,(i*10)-10);
				}
				if(head!=NULL) head = process(head->next);
				break;
            default :
                printf("Invalid Input");
        }
        printf("\nDo you want to continue press 1 : ");
        scanf("%d",&ch);
    }while(ch==1);
}

