#include<stdio.h>
int fact(int n)
{
	if (n>0)
	return n * fact(n-1);
	else 
	return 1;

}
void main()
{
	int n;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("factorial of %d : %d",n,fact(n));
}

