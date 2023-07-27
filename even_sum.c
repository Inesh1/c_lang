#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else if (n%2==0)
	return n + sum(n-1);
	else 
	return sum(n-1);
}
void main()
{
	int n;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter range: ");
	scanf("%d",&n);
	printf("sum of even number : %d",sum(n));
}

