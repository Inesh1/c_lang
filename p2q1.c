#include<stdio.h>
void main()
{
	int age,ch;
	printf("Please choose my dear Rajat \n 1.Your are an Indian \n 2.You are not an Indian\n");
	scanf("%d",&ch);

if(ch==2)
	{
		printf("Your are not eligible\n");
	}
	else if(ch==1)
	{
		printf("Enter your age\n");
		scanf("%d",&age);
		if(age < 18)
		{
			printf("Your are not eligible\n");
		}
		else
		{
			printf("Your are eligible\n");
		}
	}
	else
		printf("Wrong choice please choose correctly\n");

}
