#include <stdio.h>
#include <stdlib.h>
int main()
{   
	int num;  
	FILE *fptr;    
	fptr = fopen("text.txt","w");  
	if(fptr == NULL)   
	{                             
		printf("Error!");                                      
		exit(1);                
	}  
	printf("Enter num: ");  
	scanf("%d",&num);  
	fprintf(fptr,"%d",num);    //write data into the file
	fclose(fptr);  
	return 0;
}

