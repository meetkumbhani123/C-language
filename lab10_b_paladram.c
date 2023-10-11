#include<stdio.h>
void main()
{
	int i=1,n,l,f;
	printf("enter the value of n");
	scanf("%d,&n");
	f=n;
	while(i<=n)
	{
	l=n%10;
	f=n*10+l;
	n=n/10;
		
	}
	if(f==n)
	{
		printf("number is paladrom");
	}
	else
	{
		printf("number is not paladrom");
	}
}
