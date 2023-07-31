#include <stdio.h>
void main()
{
	int n,m,c=0;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	if(m==0)
	{
		printf("Number of digits in %d is 1",n);
	}
	else
	{
		while(m>0)
		{
			m=m/10;
			c++;
		}
	printf("Number of digits in %d is %d",n,c);
	}
	
}
