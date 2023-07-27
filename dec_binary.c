#include<stdio.h>
int binary(int n)
{
	int m,c=0,i,x;
	m=n;
	while(m>0)
	{
		m=m/10;
		c++;
	}
	if(c==0)
	{
		printf("0000");
	}
	else
	{
		for(i=(c*4)-1;i>=0;i--)
		{
			x=n>>i;
			if(x&1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
	return 0;
}
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	binary(n);
	
}

