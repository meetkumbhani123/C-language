#include<stdio.h>
 int sum(int,int);
 
int main(){
	int a,b,result;
	printf("enter the value of a and b : ");
	scanf("%d %d",&a,&b);
	result=sum(a,b);
	printf(" sum =%d",result);
}
 int sum(int a,int b)
 {
 	int c;
 	c=a+b;
 	return c;
 }

