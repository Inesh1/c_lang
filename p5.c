#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int i,j,n,k,c,x;
	for(i=1;i<5;i++)
	{
		
		n=i+i-1;
		for(k=1;k<5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("%c",64+i);
		}
		printf("\n");
			
	}
	for(i=4,x=1;i>1;i--,x++)
	{
		c=5-i;
		n=i+i-2;
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		for(j=1;j<n;j++)
		{
			printf("%c",x+68);
		}
	
		printf("\n");
			
	}
	
}
