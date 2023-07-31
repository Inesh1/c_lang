#include <stdio.h>
void main()
{
	int a,b,*p,*q,t;
	printf("enter");
	scanf("%d",&a);
	printf("enter");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("a= %d",a);
	printf("b= %d",b);
	t=*p;
	a=*q;
	b=t;
	printf("after swap\n");
	printf("a= %d",a);
	printf("b= %d",b);
}
