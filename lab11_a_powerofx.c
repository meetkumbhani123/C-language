#include<stdio.h>
int main()
{
	int i=1,x,y,res=1;
	printf("enter the value of x and its power");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
	{
		printf("x and its power y is 0");
	}
	for(i=1;i<=y;i++)
	{
		res=res*x;
		
	}
    printf("%d",res);
	return 0;	
}
