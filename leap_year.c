#include <stdio.h>
void main() 
{
   	int year;
   	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
   	printf("Enter a year: ");
	scanf("%d", &year);
 	(year%4==0 && year%100!=0) ? printf("Year %d is a leap year",year) :
        (year%400 ==0 ) ? printf("Year %d is a leap year",year) : printf("Year %d is a common year",year);
}
