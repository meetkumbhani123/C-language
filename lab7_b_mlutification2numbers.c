#include<stdio.h>
void main()
{
	int a,b,c,sum,max;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?a:b;
	sum=max*c;
	printf("%d",sum);

}
