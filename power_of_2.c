#include <stdio.h>
#include<math.h>
void main()
{
	int n,c=0,m;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	while(m>1)
	{
		if(m%2==0)
		{
			m=m/2;
			c++;
		}
		else
		{
			break;
		}
	}
	if(pow(2,c)==n)
	{
		printf("2's power %d is %d ",c,n);
	}
	else
	{
		printf("%d is not a power of 2",n);
	}
}
