#include<stdio.h>
struct Stru{
	int n;
	float flt;
	char str[8];
};
union Uni{
	int n;
	float flt;
	char str[8];
};
void main(){
	struct Stru s={5,2.5,"Inesh"};
	union Uni u={5,2.5,"Inesh"};
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	puts("With same data");
	printf("\nSize of Structure: %d",sizeof(s));
	printf("\nSize of Union: %d",sizeof(u));
}

