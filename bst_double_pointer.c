#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
struct tree *left;
int info;
struct tree *right;
}tree_type;

tree_type *create(int num)
{
	tree_type *temp;
	temp=(tree_type*)malloc(sizeof(tree_type));
	if(temp==NULL)
	printf("Memory not available\n");
	else
	{
		temp->info=num;
		temp->left=NULL;
		temp->right=NULL;
	}
	return(temp);
}

void insert(tree_type **rt,tree_type *temp)
{
	if(*rt==NULL)
	*rt=temp;
	else
	{
		if((temp->info)<((*rt)->info))
			insert(&((*rt)->left),temp);

		else
			insert(&((*rt)->right),temp);
	}
}

void inorder(tree_type *rt)
{
	if(rt==NULL)
	{
		return;
	}
	else{
		inorder(rt->left);
		printf("%d ",rt->info);
		inorder(rt->right);
	}
	return;
}
void preorder(tree_type *rt)
{
	if(rt==NULL)
	{
		return;
	}
	else{
		printf("%d ",rt->info);
		preorder(rt->left);
		preorder(rt->right);
	}
	return;
}
void postorder(tree_type *rt)
{
	if(rt==NULL)
	{
		return;
	}
	else{
		postorder(rt->left);
		postorder(rt->right);
		printf("%d ",rt->info);
	}
	return;
}
tree_type* minnode(tree_type* temp) {
    tree_type* pos = temp;
    while (pos && pos->left != NULL) {
        pos = pos->left;
    }
    return pos;
}
void delete(tree_type **root, int val) {
    if (*root == NULL) {
        return;
    }
    if (val < (*root)->info) 
	{
        delete(&(*root)->left, val);
    } 
	else if (val > (*root)->info) 
	{
        delete(&(*root)->right, val);
    } 
	else 
	{
        if ((*root)->left == NULL) 
		{
			tree_type* del= *root;
            *root = (*root)->right;
            free(del);
        } else if ((*root)->right == NULL) {
            tree_type* del= *root;
            *root = (*root)->left;
            free(del);
        }
        tree_type* minval = minnode(&(*root)->right);
        (*root)->info = minval->info;
        delete((*root)->right, minval->info);
    }
    return;
}
void count(tree_type *root,int *c)
{
	if(root!=NULL)
	{
		*c=*c +1;
		count(root->left,c);
		count(root->right,c);
	}
	return;
}
void count_leaf(tree_type *root,int *c)
{
	if(root->left==NULL && root->right==NULL)
	{
		*c=*c +1;
		return;
	}
	else
	{
		count_leaf(root->left,c);
		count_leaf(root->right,c);
	}
	return;
}
void count_right(tree_type *root,int *c)
{
	if(root->left==NULL && root->right!=NULL)
	{
		*c=*c +1;
		return;
	}
	else
	{
		count_right(root->left,c);
		count_right(root->right,c);
	}
	return;
}
void count_left(tree_type *root,int *c)
{
	if(root->left!=NULL && root->right==NULL)
	{
		*c=*c +1;
		return;
	}
	else
	{
		count_left(root->left,c);
		count_left(root->right,c);
	}
	return;
}
void count_internal(tree_type *root,int *c)
{
	if(root->left!=NULL && root->right!=NULL)
	{
		*c=*c +1;
		return;
	}
	else
	{
		count_internal(root->left,c);
		count_internal(root->right,c);
	}
}
void main()
{
	int ch,i=1,num,cn=0;;
	tree_type *root=NULL, *temp;
	printf("Enter your choice");
	while(i)
	{
		printf("\n1. Insert\n2. Inorder traversal\n3. Preorder traversal\n4. Postorder traversal\n5. Delete nodes\n6. Count nodes\n");
		scanf("\n%d",&ch);
		switch(ch)
		{
			case 1: 
				printf("\nEnter value:\n");
				scanf("%d",&num);
				temp=create(num);
				insert(&root,temp);		
				break;
			case 2: 
				inorder(root);		
				break;
			case 3: 
				preorder(root);		
				break;
			case 4: 
				postorder(root);		
				break;
			case 5: 
				printf("\nEnter value:\n");
				scanf("%d",&num);
    			delete(&root, num);		
				break;
			case 6:
				count(root,&cn);
				printf("\n%d-nodes",cn);
				cn=0;
				break;
			
			default: exit(0);
		}
		printf("\nIf you do not wish to continue press 0");
		scanf("%d",&i);
	}
}
