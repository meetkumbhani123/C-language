
#include<stdio.h>
void main()
{
int n,i;
printf("enter the value of n : ");
scanf("%d",&n);
int a[n],count=0;
for(i=0;i<n;i++)
{
printf("enter the elements a[%d]: ",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%3==0)
{
count++;
}
}
printf("count of number which divisible by 3 are: %d" ,count);
}