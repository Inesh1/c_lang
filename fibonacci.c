#include<stdio.h>
void main()
{
	int n,x,y,a,i;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number :");
	scanf("%d",&n);
	x=0;
	y=1;
	if(n<=0)
	{
		printf("Enter positive number greater than 0\n");
	}
	else
	{
			printf("%d ",x);
		if(n>=2)
		{
			printf("%d ",y);
		}
		for(i=3; i<=n;i++)
		{
			a=x+y;
			x=y;
			y=a;
			printf("%d ",a);
		}
	}
	
}

