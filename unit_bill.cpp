#include <stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
    int unit;
    printf("Enter units: ");
    scanf("%d", &unit);
    float sum;
    int b = 0;

    if (unit <= 50 && unit > 0)
        b = 1;
    else if (150 >= unit && unit > 50)
        b = 2;
    else if (250 >= unit && unit > 150)
        b = 3;
    else if(unit>=250)
        b = 4;
    switch (b)
    {
    case 1:
        sum = 0.50 * unit;
        sum = sum + (sum * 0.20);
        printf("Totunitl bill %f", sum);
        break;
    case 2:
        sum = 0.75 *(unit-50) +25;
        sum = sum + (sum * 0.20);
        printf("Totunitl bill %f", sum);
       	break;
    case 3:
        sum = 1.20 *( unit-150)+100;
        sum = sum + (sum * 0.20);
        printf("Totunitl bill %f", sum);
        break;

    case 4:
        sum = 1.50 *( unit-250)+220;
        sum = sum + (sum * 0.20);
        printf("Total unit bill %f", sum);
        break;
        
    default:
    	printf("Enter your bill correctly");
    }
}

