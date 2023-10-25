#include<stdio.h>
float si(float p,float r,float  n);
void main()
{
	float p,r,n;
	printf("enter the value of p,r and n :");
	scanf("%f %f %f",&p,&r,&n);
float result=si(p,r,n);
printf("ans =%f",result);
}
float si(float a,float b,float c)
{
	float d;
	d=(a*b*c)/100;
	return d;
}
