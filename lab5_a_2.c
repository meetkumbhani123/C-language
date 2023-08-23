#include<stdio.h>
void main()
{
int a,b,c;
printf("enter value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("%d",a);
printf("%d",b);
}

