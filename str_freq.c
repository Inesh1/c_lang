#include <stdio.h>  
#include <string.h>  
   
void main()  
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
    char str[20];
    printf("Enter a string\n");
    scanf("%s",&str);
    int i, j, len = strlen(str);  
    int f[len];  
      
      
    for(i = 0; i < len; i++) {  
        f[i] = 1;  
        for(j = i+1; j < len; j++) {  
            if(str[i] == str[j]) {  
                f[i]++;  
                str[j] = '-';  
            }  
        }  
    }  
    printf("Characters and their frequencies\n");  
    for(i = 0; i < len; i++) 
	{  
        if(str[i] != ' ' && str[i] != '-')  
            printf("%c-%d\n", str[i], f[i]);  
    }  
          
}  
