#include<stdio.h>
void main()
{
	int i=2,flag=1,n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
		flag=0;
		}
		break;
	}
	if(flag==1)
	{
		printf("given number is prime");
	}
	else
	{
		printf("given number is not prime");
	}
}
