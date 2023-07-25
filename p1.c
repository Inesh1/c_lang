#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int i,j,k,c=0,n;
	printf("Enter:");
	scanf("%d/n",&n);
	for(i=1;i<=n;i++)
	{
		
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
	
		for(j=1;j<=i+c;j++)
		{
			printf("*");
		}
		printf("\n");
		c++;	
	}
	
}
