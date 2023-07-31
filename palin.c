#include<stdio.h>
int reverse(int n)
{
	if(n>0)
	{
		int b=n,c=1;
		while(b)
		{
			b=b/10;
			c=c*10;
		}
		int a=n%10;
		return (a*c/10+reverse(n/10));
	}
	else
	return 0;
	
}
void main()
{
	int r,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	r=reverse(n);
	if(n==r)
	printf("Number is Palindrome");
	else
	printf("Number is not Palindrome");
}

