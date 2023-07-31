#include <stdio.h>
void main()
{
	int n,c=0,m,i,x;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		m=m/10;
		c++;
	}
	if (c==0)
	{
		printf("0000");
	}
	else
	{
		for(i=(c*4)-1;i>=0;i--)
		{
			x=n>>i;
			if(x & 1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
}
