#include<stdio.h>
void main()
{
	int i=1,a,count=0;
	printf("enter the value of a: ");
	scanf("%d",&a);
	while(i<=a)
	{
		
		if(i%2==0)
		
		{
			prin("even %d",i);
		}
		else
		{
			print("odd %d",i);
		}
		i++;
	}
}
