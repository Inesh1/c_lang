#include <stdio.h>
void main()
{
	int i, s;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter the size of an array\n");
	scanf("%d", &s);
	int a[s];
	printf("Enter the %d Elements\n", s);
	for (i = 0; i < s; i++)
	scanf("%d", &a[i]);
	int max = a[0];
	int min = a[0];
	for (i = 0; i < s; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("minimum value =%d\n", min);
	printf("max value =%d\n", max);
}

