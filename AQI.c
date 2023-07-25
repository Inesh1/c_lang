#include <stdio.h>
void main()
{
 int a;
 printf("Enter AQI \n ");
 scanf("%d", &a);
 if (a > 0 && a <= 50)
 	printf("Healthy");
 else if (a > 50 && a <= 100)
 	printf("Moderate");
 else if (a > 100 && a <= 200)
 	printf("Unhealthy");
 else if (a > 200 && a <= 300)
 	printf("very Unhealthy");
 else if (a > 300 && a <= 500)
 	printf("Hazardous");
 else
 	printf("Enter a valid AQI");

}
