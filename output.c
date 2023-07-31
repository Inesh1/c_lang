#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter the Number: ");
	int n,pos;
	scanf("%d",&n);
	printf("Enter the Position: ");
	scanf("%d",&pos);
	
	int p=n^(1<<(pos-1));
	printf("%d after toggling bit at %d position: %d",n,pos,p);
}
