#include<stdio.h>
int main()
{
	int i=1,x,y,res;
	printf("enter the value of x and its power");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
	{
		printf("x and its power y is 0");
	}
	while(i<=y)
	{
		res=res*x;
		i++;
	}
    printf("%d",res);
	return 0;	
}
