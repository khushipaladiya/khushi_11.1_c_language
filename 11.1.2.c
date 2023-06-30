#include<stdio.h>

main(){
	int a,b,c;
	int *ptr;
	int *p;
	
	printf("Before swapping:\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	
	ptr=&a;
	p=&b;
	
	c=*ptr;
	*ptr=*p;
	*p=c;
	
	printf("After swapping:\n");
	printf("a : %d\n",*ptr);
	printf("b : %d",*p);
}
