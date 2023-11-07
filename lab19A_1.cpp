#include<stdio.h>
int factorial(int);
int main()
{
	int n,a;
	printf("entr the number");
	scanf("%d",&n);
a=factorial(n);
printf("%d",a);
}
int factorial(int d)
{
	if(d==0)
	{
		return 1;
	
	}
	return d*factorial(d-1);
}
