
#include<stdio.h>
void main()
{
int n,i;
printf("enter the value of n : ");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
{
printf("enter the elements a[%d]: ",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("coping the elements of a[n] in b[n] : ");
for(i=0;i<n;i++)
{
printf(" %d",b[i]);
}
}