#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==3)
			{
				printf("* ");
			}
			else
			{
				if(j==1 || j==5)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
			
	}
	
}
