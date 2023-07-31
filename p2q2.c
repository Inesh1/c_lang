#include<stdio.h>
void main()
{
	int m;
	printf("Please enter your marks\n");
	scanf("%d",&m);
	if(m>=75 && m<=100)
	{
		printf("Grade: Distinction");
	}
	else if(m>=60 && m<75)
	{
		printf("Grade: First division");
	}
	else if(m>=50 && m<60)
	{
		printf("Grade: Second division");
	}
	else if(m>=40 && m<50)
	{
		printf("Grade: Third division");
	}
	else if(m>=0 && m<40)
	{
		printf("Grade:  Fail");
	}
	else 
	{
		printf("Please enter your marks correctly");
	}
	
}
