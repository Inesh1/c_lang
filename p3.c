#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int i,j,n,k;
	for(i=1;i<5;i++)
	{
		
		n=i+i-1;
		for(k=1;k<5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
			
	}
	
}
