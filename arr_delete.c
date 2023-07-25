#include <stdio.h> 
void main ()  
{
    int pos, i, num;  
    printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
	int arr[num];
    printf (" \n Enter %d elements in array: \n ", num); 
	for (i = 0; i < num; i++ )  
    {   
		printf ("Element %d = ", i+1);  
        scanf (" %d", &arr[i]);  
    }   
    printf( " Enter position to be delete: \n ");  
    scanf (" %d", &pos);  
    if (pos >= num+1)  
    {  
        printf (" \n Invalid!!! Enter a position again");  
    }  
    else  
    {
    	for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];   
        }  
          
        printf (" \n New array is: \n");  
     for (i = 0; i< num - 1; i++)  
        {  
            printf (" Element %d = ", i+1);  
            printf (" %d \n", arr[i]);  
        }  
    }  
}  
