#include<stdio.h>
void main()
{
	int i=0,n,a=0,b=1,sum;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("%d",a);
	
	for(i=0;i<=n;i++)
	{  sum=a+b;
		
		printf("%d",sum);
		b=a;
		a=sum;
	}
}
