#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int cof;
    int power;
    struct node *next;
} node;

void insert(node **head, int cof, int power)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->cof = cof;
    temp->power = power;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        node *curr = *head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void display(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        printf("%dx^%d", curr->cof, curr->power);
        if (curr->next != NULL)
        {
            printf(" + ");
        }
        curr = curr->next;
    }
    printf("\n");
}

node *add(node *p1, node *p2)
{
    node *result = NULL;
    node *curr = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->next = NULL;

        if (p1->power == p2->power)
        {
            temp->cof = p1->cof + p2->cof;
            temp->power = p1->power;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->power > p2->power)
        {
            temp->cof = p1->cof;
            temp->power = p1->power;
            p1 = p1->next;
        }
        else
        {
            temp->cof = p2->cof;
            temp->power = p2->power;
            p2 = p2->next;
        }

        if (result == NULL)
        {
            result = temp;
            curr = result;
        }
        else
        {
            curr->next = temp;
            curr = curr->next;
        }
    }

    while (p1 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->cof = p1->cof;
        temp->power = p1->power;
        temp->next = NULL;

        curr->next = temp;
        curr = curr->next;

        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->cof = p2->cof;
        temp->power = p2->power;
        temp->next = NULL;

        curr->next = temp;
        curr = curr->next;

        p2 = p2->next;
    }

    return result;
}

int main()
{
    node *p1 = NULL;
    node *p2 = NULL;

    int ch, cof, power;

    printf("Menu\n1. Insert into Equation 1\n2. Insert into Equation 2\n3. Add Equations\n4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter coefficient and Exponent of Equation 1: ");
            scanf("%d%d", &cof, &power);
            insert(&p1, cof, power);
            break;
        case 2:
            printf("Enter coefficient and Exponent of Equation 2: ");
            scanf("%d%d", &cof, &power);
            insert(&p2, cof, power);
            break;
        case 3:
            if (p1 == NULL || p2 == NULL)
            {
                printf("Please enter Equation 1 and Equation 2.\n");
                break;
            }
            node *p3 = add(p1, p2);
            printf("\nThe Sum of Two Equations is:\n");
            display(p3);
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


