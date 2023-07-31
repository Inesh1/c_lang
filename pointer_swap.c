#include<stdio.h>
void swap(int n, int m)
{
	int s,*p,*q;
	p=&n;
	q=&m;
	printf("\nOriginal numbers: %d,%d\n",*p,*q);
	s=p;
	p=q;
	q=s;
	printf("After swapping numbers: %d,%d",*p,*q);
}
void main()
{
	int n,m;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter two numbers:\n");
	scanf("%d \n %d",&n,&m);
	swap(n,m);
}

