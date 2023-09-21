#include<stdio.h>
void main()
{
int a,b,c,big;
printf("enter the value of a,b,c : ");
scanf("%d %d %d",&a,&b,&c);
big=(a>b && a>c)? a : (b>c? b :c);
printf("biggest number is %d",big);
}