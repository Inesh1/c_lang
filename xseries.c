#include <stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	float x,a,n,ans=0.0f;
	int fact=1;
	printf("Enter x\n");
	scanf("%f",&x);
	printf("Enter N\n");
	scanf("%f",&n);
	a=n;
	while(n>=1)
	{
		
		while(a>=1)
		{
			fact=fact*a;
			a--;
			
		}
		ans += x/fact;
		printf("(%f/%d)+",x,fact);
		n--;
		a=n;
		fact=1;
		
	}
	printf("0 = %f\n",ans);
}

