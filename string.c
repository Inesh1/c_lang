#include<stdio.h>
void string(char n[20], char m[20])
{
	int l1,l2,i,j;
	l1=strlen(n);
	l2=strlen(m);
	int f1[l1],f2[l2];
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			f1[i]=1,f2[i]=0;
			for(j=0;j<l1;j++)
			{
				if(n[i]==m[j])
				{
					f2[i]++;
					m[j]='#';
				}
			}
		}
		for(i=0;i<l1;i++)
		{
			if(f1[i]!=f2[i])
			{
				printf("Not an anagram");
				break;
			}
			if(i==l1-1)
			{
				printf("String is an anagram");
			}
		}
	}
	else
	{
		printf("Not an anagram");
	}
}
	

void main()
{
	char n[20],m[20];
	printf("Enter a string: ");
	scanf("%s",&n);
	printf("Enter a string: ");
	scanf("%s",&m);
	string(n,m);
}

