#include <stdio.h>  
#include<string.h>  
void main()  
{  
   char str1[5];  
   char str2[10];   
   int value, p, c; 
   char usr[] = "ABCDE"; 
   char pass[] = "abcde@1234";
   printf("Enter the username : \n");  
   scanf("%s",str1);  
   printf("Enter the password : \n");  
   scanf("%s",str2);  
   
   
   value = strcmp(str1,usr);  
   p= strcmp(str2,pass);
   if(value == 0 && p == 0)  
   printf("Welcome user\n");  
   else  
   {
     for(c=1;c<=5;c++)
     {
       printf("Try again\n");
       printf("Enter the username : \n");  
       scanf("%s",str1);  
       printf("Enter the password : \n");  
       scanf("%s",str2); 
       value = strcmp(str1,usr);  
       p= strcmp(str2,pass);
       if(value == 0 && p == 0) 
       {
         printf ("Welcome user\n");
         break;
       }
       else if (c == 5)
       {
         printf ("Access totally denied \n");
         break;
       }
     }
   }  
}
