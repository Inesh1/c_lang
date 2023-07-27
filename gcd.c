#include<stdio.h>
void hcf(int a,int b)
{
	int r=0;
	if(a>b)
	{
		r = a%b;
		if(r==0)
		{
			printf("Highest common factor is %d",b);
		}
	
		else 
			return hcf(r,a);
	}
	
	else 
	{
		r = b%a;
		if(r==0)
		{
			printf("Highest common factor is %d",a);
		}
	
		else 
			return hcf(r,b);
	}

}
void main()
{
	int a,b;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	hcf(a,b);
}


