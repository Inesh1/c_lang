#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int i,j,k,c;
	for(i=5;i>1;i--)
	{
		c=5-i;
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		for(j=i;j>1;j--)
		{
			printf("*");
		}
	
		printf("\n");
			
	}
	
}
