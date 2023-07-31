#include<stdio.h>
int sum(int n)
{
	if(n>0)
	{
		int a=n%10;
		return (a+sum(n/10));
	}
	
	else 
	return 0;

}
void main()
{
	int n;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Sum of digits of %d : %d",n,sum(n));
}

