#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *append(struct node *head, int num)
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

void display(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

struct node *insert(struct node *head, int num, int pos)
{
    struct node *temp, *newnode;
    int i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->val = num;
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        while (i < pos - 1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL)
        {
            printf("Invalid position\n");
            return head;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("Value Inserted at %dth Position\n", pos);
    return head;
}

int main()
{
    struct node *head = NULL;
    int ch, num, pos;
    printf("\n\nInesh Singh Negi MCA 2D Roll no-2201184/073\n1. Append\n2. Insert\n3. Display\n4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to append: ");
            scanf("%d", &num);
            head = append(head, num);
            break;
        case 2:
            printf("Enter the value to insert: ");
            scanf("%d", &num);
            printf("Enter the position ");
            scanf("%d", &pos);
            head = insert(head, num, pos);
            break;
        case 3:
            printf("Linked List :-\n");
            display(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}

