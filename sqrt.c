#include<stdio.h>
#include<math.h>
void main()
{
    int num,i,c,n;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
    printf("Enter max range: \n");
    scanf("%d",&n);

    for(num = 2;num<=n;num++)
	{
         c = 0;
         for(i=2;i<=sqrt(num);i++)
		{
             if(num%i==0)
			 {
                 c++;
             }
        }
        
         if(c==0)
             printf("%d ",num);
    }
}

