#include<stdio.h>
void main()
{
	int a,b,c;
	printf("print the value of a");
	scanf("%d",&a);
	printf("print the value of b");
	scanf("%d",&b);
	printf("print the value of c");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
		 printf("a is largest");	
		}
		else{
		printf("c is largest");
		}
	}
	else{
		if(b>c){
		 printf(" b is largest");
		}
		else{
		 printf("c is largest");	
		}
	}
}
