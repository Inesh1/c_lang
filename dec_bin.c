#include<stdio.h>
int binary(int n)
{
	int a,b=1;
	while(n>0)
	{
		a=n%2;
		b=b*10+a;
		n=n/2;
	
	}
	
	return b;
}
void main()
{
	int n,m,r=0,rem,b;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
	b=binary(m);
	printf("b : %d");
	while(m>0)
	{
		rem = b%10;
		r=r*10+rem;
		m=m/10;
	}
	printf("decimal : %d\nbinary : %d",n,r);
}

