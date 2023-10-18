#include<stdio.h>
void main()
{
int n,i,countodd=0,counteven=0;
printf("enter the value of n : ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf(" arr[%d] :",i);
scanf("%d",&a[i]);
if(i%2==0)
{
counteven++;
}
else
{
countodd++;
}
}
printf("count of even number is :%d", counteven);
printf("\ncount of odd number is  :%d", countodd);
}