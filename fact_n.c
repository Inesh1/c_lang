#include<stdio.h>
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	return f;
}
void main()
{
	int n,s=0;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		s += fact(n)/n;
		n--;
	}
	printf("Sum of series : %d",s);
}

