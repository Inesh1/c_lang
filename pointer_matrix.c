#include<stdio.h>
int main(){
	
	
	int *pt,*ct,i,j,s;
	
	int flag=0;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter size of square matrix:");
	scanf("%d",&s);
	int add[s][s],a[s][s],b[s][s]; 
	printf("Enter elements for first matrix:\n");
	for(i=0;i<s;i++)
	{    
		for(j=0;j<s;j++){
		
	   scanf("%d",&a[i][j]);
       }
   }
   
   
   printf("Enter elements for second matrix:\n");
	for(i=0;i<s;i++)
	{    
		for(j=0;j<s;j++){
		
	   scanf("%d",&b[i][j]);
       }
   }
   
   printf(" First matrix: \n");
	for(i=0;i<s;i++)
	{    
		for(j=0;j<s;j++){
		
	   printf(" %d ",a[i][j]);
       }
        printf("\n");
   }
   
   
   printf(" Second matrix: \n");
	for(i=0;i<s;i++)
	{    
		for(j=0;j<s;j++){
		
	   printf(" %d ",b[i][j]);
       }
       printf("\n");
   }
   
   
   
   pt=a;
   ct=b;
   
   for(i=0;i<s;i++)
   {
   	for(j=0;j<s;j++)
   	{
   		
   		add[i][j]= *pt + *ct;
   		pt++;
   		ct++;
	   }
   }
   
   int *ad;
   ad=add;
   
    printf("Added matrix: \n");
	for(i=0;i<s;i++)
	{    
		for(j=0;j<s;j++){
		
	   printf(" %d ",*ad);
	   ad++;
       }
       printf("\n");
   }
    
	


}
