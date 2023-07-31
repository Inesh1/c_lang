#include <stdio.h>
#include <math.h>
void main()
{
	int r=0,n,m,c=0,s=0,t,i;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	if(m>9)
	{
		while(m>0)
		{
			t=m%10;
			r=r*10+t;
			m=m/10;
			c++;
		}
		t=n-((r%10)*pow(10,c-1));
		m=(n%10)*pow(10,c-1);
		m=m+t;
		m=m/10;
		m=(m*10)+(r%10);
		printf("Original number is %d and new number is %d\n",n,m);
	}
	else
	{
		printf("Original number is %d and new number is %d\n",n,n);
	}
}
