#include<stdio.h>
void main()
{
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	int amount;
	int n1,n2,n5,n10,n20,n50,n100,n500;
	n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 =0;
	printf("Enter  total Amount to find the notes : ");
	scanf("%d",&amount);
	switch(amount>=500)
	{
		case 1:
			n500 = amount/500;
        	amount -= n500 * 500;
      
        break;
       
	}
	switch(amount >=100)
	{
		case 1:
			n100 = amount/100;
        	amount -= n100 * 100;
        break;
	}
	switch(amount >=50)
	{
		case 1:
			n50 = amount/50;
        	amount -= n50 * 50;
	}
	switch(amount >=20)
	{
		case 1:
			n20 = amount/20;
        	amount -= n20 * 20;
        break;
	}
	switch(amount >=10)
	{
		case 1:
			n10 = amount/10;
        	amount -= n10 * 10;
        break;
	}
	switch(amount >0)
	{
		case 1:
			n1 = amount;
        break;
	}
	printf("No.of 500 notes = %d \n",n500) ;
    printf( "No.of 100 notes =%d \n", n100) ;
    printf( "No.of 50 notes= %d\n",  n50) ;
    printf( "No.of 20 notes =%d \n",  n20) ;
    printf( "No.of 10 notes=%d \n",  n10) ;
    printf( "No.of 1 notes=%d \n",  n1) ;
}

