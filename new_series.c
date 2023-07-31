#include <stdio.h>
#include<math.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	float x,a,n,ans=0.0f;
	int fact=1,i,j,np=1,xp;
	printf("Enter x\n");
	scanf("%f",&x);
	printf("Enter N\n");
	scanf("%f",&n);
	a=n;
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
			np=np*(n-j+1);
			xp=pow(x,j);
		}
		ans += (np*xp)/fact;
		fact=1;
		np=1;
	}
	printf("sum of the series is %f\n",ans);
}

