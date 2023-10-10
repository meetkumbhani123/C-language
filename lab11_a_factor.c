#include<stdio.h>
void main()
{
	int i,x;
	printf("enter the value of x : ");
	scanf("%d",&x);
	
	printf("facters are = : ");
for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			printf(" %d",i);
		}
	
	}
}
