#include <stdio.h>
void main()
{
	int r=0,n,m,c=0,s=0,t,i;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		t=m%10;
		r=r*10+t;
		m=m/10;
		c++;
	}
	m=n;
	if(c%2==0)
	{
		for(i=0;i<=c/2;i++)
		{
			
			s=s+m%10+r%10;
			if(i==(c/2)-1)
			{
				printf("(%d + %d)",m%10,r%10);
				break;
			}
			printf("(%d + %d)+",m%10,r%10);
			m=m/10;
			r=r/10;
			
		}
	}
	else
	{
		for(i=0;i<=(c/2)+1;i++)
		{
			
			if(i==(c/2))
			{
				printf(" %d",r%10);
				s=s+r%10;
				break;
			}
			s=s+m%10+r%10;
			printf("(%d + %d)+",m%10,r%10);
			m=m/10;
			r=r/10;
		}
	}
			printf(" = %d",s);
}
