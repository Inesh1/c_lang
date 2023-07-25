
#include <stdio.h>
void main()
{
	int i,j,n,sum=0,max=0,min=0;
	printf("Enter total elements in an array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element no.%d\n",i);//take n elements fro the user and store in an array and find the sum of those elements
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(i=0;i<n;i++)         //wap to find max and min elements in an array
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("element no.%d :%d\n",i+1,arr[i]);
	
	}
		printf("sum of elements :%d\n",sum);	
		printf("Max element :%d\n",max);	
		printf("Min element :%d\n",min);
}

//wap to find second larget element in an array
