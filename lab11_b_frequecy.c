#include<stdio.h>
void main()
{
	int i=1,rem,n,count=0;
	printf("enter the value of n= ");
	scanf("%d",&n);
	printf("enter the value of rem := ");
	scanf("%d",&rem);
	for(i=1;i<=n;i++)
	{
		if(n%10==rem)
		{
			count++;
			
		}
		n=n/10;
	}
	printf("%d",count);
}
