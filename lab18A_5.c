#include<stdio.h>
int swap(int,int);
int swap1(int*,int*);
void main()
{
	
	int a,b,c,d;
	printf(" ago: enter the value of a and b: ");
	scanf("%d %d",&a,&b);
		printf("enter the value of c and d: ");
	scanf("%d %d",&c,&d);

	
int res1=swap(a,b);
int res2=swap1(&c,&d);
		printf("now: %d %d",a,b);
	printf("now: %d %d",c,d);
	
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int swap1(int *c ,int *d)
{
		int temp;
	temp=*c;
	*c=*d;
	*d=temp;
	
}

