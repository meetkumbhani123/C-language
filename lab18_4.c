#include<stdio.h>
int  maximum(int,int,int);
void main()
{
	int a,b,c;
	printf("enter the values of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
int	result=maximum(a,b,c);
printf("%d",result);
}
int maximum(int a,int b,int c)
{
	int max;
	max=(a>b && a>c)?(b>c):(c>b);
	return max;
}
