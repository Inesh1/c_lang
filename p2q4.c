#include<stdio.h>
void main()
{
	int m;
	float b;
	printf("Please enter your salary\n");
	scanf("%d",&m);
	if(m>100000)
	{
		b=m*0.05;
	}
	else if(m>50000 && m<=100000)
	{
		b=m*0.1;
	}
	else if(m>25000 && m<=50000)
	{
	b=m*0.15;
	}
	
	else if(m>0 && m<25000)
	{
	b=m*0.2;
	}
	else 
	{
		printf("Please enter your salary correctly");
	}
	printf("%f",m+b);
	
}
