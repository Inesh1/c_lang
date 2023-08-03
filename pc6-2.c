#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
    int c,pow;
    struct linkedlist *next;
}nodepoly;


nodepoly* createNode(int c, int pow){
    nodepoly *temp=malloc(sizeof(nodepoly));
    temp->c = c;
    temp->pow = pow;
    temp->next=NULL;
    return temp;
}
nodepoly* insert(nodepoly *head, int c, int pow){
    nodepoly *curr=head, *temp=NULL, *prev=NULL;
    temp = createNode(c, pow);
    if(curr==NULL) return temp;
    while(curr!=NULL && curr->pow<temp->pow){
        prev = curr;
        curr=curr->next;
    }
    if(curr!=NULL && curr->pow==temp->pow) curr->c+=temp->c;
    else if(curr==head && temp->pow<curr->pow){
        temp->next=curr;
        head=temp;
    }
    else{
        temp->next=curr;
        prev->next=temp;
    }
    return head;
}
void display(nodepoly *head){
    if(head!=NULL){
        display(head->next);
        if (head->next != NULL)
        {
            printf(" + ");
        }
        printf("%dx^%d",head->c,head->pow);
    }
}
void add(nodepoly *first, nodepoly *second){
    nodepoly *ans=NULL;
    while(first!=NULL || second!=NULL){
        if(first!=NULL && second!=NULL){
            if(first->pow==second->pow){
                ans = insert(ans, first->c + second->c, first->pow);
                first = first->next;
                second = second->next;
            }
            else if(first->pow > second->pow){
                ans = insert(ans, first->c, first->pow);
                first = first->next;
            }
            else{
                ans = insert(ans, second->c, second->pow);
                second = second->next;
            }
        }
        else if(first!=NULL){
            ans = insert(ans, first->c, first->pow);
            first = first->next;
        }
        else{
            ans = insert(ans, second->c, second->pow);
            second = second->next;
        }
    }
    display(ans);
    printf("\n");
}

int main(){
    nodepoly *first=NULL, *second=NULL;
    int ch, c, pow;
	printf("\tMenu\n1. Insert in polynomial p1 \n2. Insert in poynomial p2\n3. Addition p3=p1+p2\n4. Exit\n");
    while(1)
	{
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                printf("Enter coff and  power\n");
                scanf("%d %d",&c,&pow);
                first = insert(first, c, pow); 
				break;
            case 2 :
                printf("Enter coff and power\n");
                scanf("%d %d",&c,&pow);
                second = insert(second, c, pow); 
				break;
            case 3 :
                add(first, second); 
				break;
            case 4:
            	exit(0);
			default :
                printf("Enter valid Input");
        }
    }
    return 0;
}

