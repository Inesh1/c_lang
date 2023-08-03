#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *insert(struct node *head, int num)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = num;
    temp->next = NULL;

    if (head == NULL)
    {
        return temp;
    }
    struct node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
void disp(struct node *head)
{
    struct node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");
}
void rem_dub(struct node *head)
{
    struct node *current = head;
    struct node *runner;
    struct node *duplicate;

    while (current != NULL && current->next != NULL)
    {
        runner = current;
        while (runner->next != NULL)
        {
            if (current->val == runner->next->val)
            {
                duplicate = runner->next;
                runner->next = runner->next->next;
                free(duplicate);
            }
            else
                runner = runner->next;
        }
        current = current->next;
    }
}

int main()
{
    struct node *head = NULL;
    int ch, num;
    printf("\n\nInesh Singh Negi MCA 2D Roll no-2201184/073\n1. Insert a node\n2. Remove duplicate nodes\n3. Display \n4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &num);
            head = insert(head, num);
            break;
        case 2:
            rem_dub(head);
            printf("Duplicate nodes removed \n");
            break;
        case 3:
            printf("List: ");
            disp(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n");
    }

    return 0;
}

