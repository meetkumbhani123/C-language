#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter the value of n = :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("sum of all number is : %d",sum);
}
