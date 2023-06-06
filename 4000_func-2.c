#include<stdio.h>
div(int n){
	int div;
	printf("%d ",n);
	
}
main()
{
	int a;
	printf("Enter number = ");
	scanf("%d",&a);
	div(a);
	if((a % 3 == 0) && (a % 5 == 0)){
		printf("is divisible by 3 and 5");
	}else{
		printf("is not divisible by 3 and 5");
	}
}
