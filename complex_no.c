#include<stdio.h>
struct Stru{
	int a;
	int b;
};
void func(struct Stru x,struct Stru y){
	int A=x.a + y.a;
	int B=x.b + y.b;
	printf("\nAddition: %d + %di",A,B);
}

void main(){
	struct Stru s1,s2;
	printf("Inesh Singh Negi\tMCA\tA1\t18\n\n");
	printf("Enter Complex numbers\n");
	printf("(Real part then imaginary part)\n");
	scanf("%d%d",&s1.a,&s1.b);
	scanf("%d%d",&s2.a,&s2.b);
	func(s1,s2);
}

