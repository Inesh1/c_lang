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

void insert(struct node *head, struct node **Q, struct node **R)
{
    struct node *curr = head;
    struct node *qhead = NULL;
    struct node *rhead = NULL;
    int flag = 1;

    while (curr != NULL)
    {
        if (flag == 1)
        {
            if (*Q == NULL)
            {
                *Q = curr;
                qhead = *Q;
                curr = curr->next;
            }
            else
            {
                (*Q)->next = curr;
                (*Q) = (*Q)->next;
                curr = curr->next;
            }
            flag = 0;
        }
        else if (flag == 0)
        {
            if (*R == NULL)
            {
                *R = curr;
                rhead = *R;
                curr = curr->next;
            }
            else
            {
                (*R)->next = curr;
                (*R) = (*R)->next;
                curr = curr->next;
            }
            flag = 1;
        }
    }

    if (*Q != NULL)
    {
        (*Q)->next = NULL;
    }
    if (*R != NULL)
    {
        (*R)->next = NULL;
    }

    *Q = qhead;
    *R = rhead;
}

int main()
{
    struct node *head = NULL, *Q = NULL, *R = NULL;
    int ch, num, pos;
    printf("\n\nInesh Singh Negi MCA 2D Roll no-2201184/073\n1. Insert\n2. Split\n3. Display\n4. Exit\n");
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
            insert(head, &Q, &R);
            break;
        case 3:
            printf("Odd Position\n");
            display(Q);
            printf("Even Position\n");
            display(R);
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

