#include<stdio.h>
void main()
{
	int i=1,x;
	printf("enter the value of x : ");
	scanf("%d",&x);
	while(i<=x)
	{
		if(x%i==0)
		{
			printf(" %d",i);
		}
		i++;
	}
}
