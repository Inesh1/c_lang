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

struct node *merge(struct node *list1, struct node *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    struct node *NewNode = NULL;

    if (list1->val <= list2->val)
    {
        NewNode = list1;
        NewNode->next = merge(list1->next, list2);
    }
    else
    {
        NewNode = list2;
        NewNode->next = merge(list1, list2->next);
    }

    return NewNode;
}

int main()
{
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    struct node *temp = NULL;

    int ch,num;

    printf("\n\nInesh Singh Negi MCA 2D Roll no-2201184/073 \n1. Insert into List 1\n2. Insert into List 2\n3. Merge Lists\n4. Display Merged List\n");
    while(1)
    {
        printf("\nEnter 5 to exit ");
		printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number to insert into List 1: ");
            scanf("%d", &num);
            list1 = insert(list1, num);
            break;
        case 2:
            printf("Enter the number to insert into List 2: ");
            scanf("%d", &num);
            list2 = insert(list2, num);
            break;
        case 3:
            temp = merge(list1, list2);
            printf("Lists merged successfully!\n");
            break;
        case 4:
            printf("Merged List: ");
            if (temp == NULL)
                printf("Please Merge them\n");
            disp(temp);
            break;
        case 5:
        	exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}

