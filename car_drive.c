#include<stdio.h>
void main()
{
	int n,d;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter car number: ");
	scanf("%d",&n);
	printf("Enter day number:\n 1:Monday\n 2:Tuesday\n 3:Wednesday\n 4:Thursday\n 5:Friday\n 6:Saturday\n 7:Sunday\n ");
	scanf("%d",&d);
	if(d>=1 && d<=7)
	{
		if(d%2==0 && n%2==0)
		{
			printf("Allowed to drive on even day");
		}
		else if(d%2!=0 && n%2!=0)
		{
			printf("Allowed to drive on odd day");
		}
		else
		{
			printf("Not allowed to drive");
		}
	}	
	else
	{
		printf("Enter a valid day number");
	}
}

