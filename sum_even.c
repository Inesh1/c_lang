#include <stdio.h>
void main()
{
	int a = 1,sum = 0,n;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	
	
	while(a<=n)
	{
		if(a%2 == 0)
			sum += a;
		a++;
	}
	printf("sum of even number from 1 to %d is %d",n,sum);
	printf("\n \n");
}
