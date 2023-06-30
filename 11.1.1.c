#include<stdio.h>

main(){
	int i;
	int n;
	int a[n];
	int *ptr;
	
	printf("Enter the Array size: ");
	scanf("%d",&n);
	
	printf("Enter the Elements:\n");
      for(i=0;i<n;i++){
      	printf("Enter a[%d]: ",i);
      	scanf("%d",&a[i]);
    }
    ptr=&a;
	printf("Square of each elements:\n");
	  	for(i=0;i<n;i++){
	  		printf("%d , ",*(ptr+i)**(ptr+i));
		  }  
}
