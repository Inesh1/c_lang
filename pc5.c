#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int val;
    struct tree *left, *right;
} node;

node *insert(node *root, int num)
{
    if (root == NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->val = num;
        return temp;
    }
    else if (root->val > num)
        root->left = insert(root->left, num);
    else if (root->val < num)
        root->right = insert(root->right, num);
    return root;
}

node *search(node *root, int key)
{
    if (root == NULL || root->val == key)
        return root;

    if (root->val > key)
        return search(root->left, key);

    return search(root->right, key);
}

node *min(node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->left == NULL)
        return root;
    else
        return min(root->left);
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->val)
        root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        node *temp = min(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

void leafNode(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
            (*ct)++;
        leafNode(root->left, ct);
        leafNode(root->right, ct);
    }
}

void childNode(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left != NULL && root->right != NULL)
            (*ct)++;
        childNode(root->left, ct);
        childNode(root->right, ct);
    }
}

int countlft(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;

    return 1 + countlft(root->left) + countlft(root->right);
}

int main()
{
    node *root = NULL;
    int leaf = 0, child = 0;
    int ch, num, key;
    printf("\n\nInesh Singh Negi MCA 2D Roll no-2201184/073\n 1-Insert\n 2-Search\n 3-Delete\n 4-Total Leaf Nodes\n 5-Ct Total Nodes with 2 Children\n 6-Count Nodes on Left Side\n 7-Exit\n\n");

    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("Enter a number: ");
            scanf("%d", &num);
            root = insert(root, num);
            break;
        }
        case 2:
        {
            printf("Enter the value to search");
            scanf("%d", &key);
            node *result = search(root, key);
            if (result != NULL)
                printf("Value %d found\n", key);
            else
                printf("Value %d not found \n", key);
            break;
        }
        case 3:
        {
            printf("Enter the value to delete: ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            printf("Node with value %d deleted \n", key);
            break;
        }
        case 4:
        {
            leafNode(root, &leaf);
            printf("Total No of Leaf Nodes are: %d\n", leaf);
            leaf = 0;
            break;
        }
        case 5:
        {
            childNode(root, &child);
            printf("Total No of Nodes with 2 children: %d\n", child);
            child = 0;
            break;
        }
        case 6:
        {
            int left = countlft(root);
            printf("Total No of Nodes on the Left Side %d\n", left);
            left=0;
            break;
        }
        case 7:
        {
            exit(0);
        }
        default:
        {
            printf("Invalid choice!\n");
            break;
        }
        }
    }

    return 0;
}

