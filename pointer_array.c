#include<stdio.h>
int main(){
	
	
	int *pt,s,i,j,sr;
	int flag=0;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter size of an array: ");
	scanf("%d",&s);
	int a[s];
	printf("Enter array elements:\n");
	for(i=0;i<s;i++)
	{
	   scanf(" %d",&a[i]);
    }
    
    pt=a;
    
    
    
	printf("Enter number to search: ");
	scanf("%d",&sr);
	

    for(pt; pt< &a[s-1]; pt++)
    {
    	if(sr==*pt)
    	{
    	flag=1;	
    	break;
		}
	
	}
	
	
	if(flag){
	printf("The number is present");
}
else{
	
	printf("The number is not present");
}

}


