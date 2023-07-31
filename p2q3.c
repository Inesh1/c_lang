#include<stdio.h>
void main()
{
	int n;
	char ch;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a character\n");
	scanf("%c",&ch);
	n=ch;

if(n>=65 && n<=90)
	{
		n=n+32;
		printf("%c\n",n);
	}
else if(n>=97 && n<=122)
	{
		n=n-32;
		printf("%c\n",n);
	}
else
{
	printf("Enter only alphabet");
}
}
