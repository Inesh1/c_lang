#include <stdio.h>
void main()
{
	int r=0,n,m,s=0,t;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		t=m%10;
		r=r*10+t;
		m=m/10;
	}
	if(r==n)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not paindrome");
	}
}
