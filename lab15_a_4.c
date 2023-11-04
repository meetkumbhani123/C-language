#include<stdio.h>
void main()
{
int i,n,target,found, position;
printf("enter the value of n : ");
scanf("%d",&n);
int a[n];
printf("enter  elements of the array :\n ");
for(i=1;i<=n;i++)
{
printf("arr[%d] :",i);
scanf("%d",&a[i]);
}
printf(" enter the element to search for: ");
scanf("%d",&target);
for(i=1;i<=n;i++)
{
if(a[i]==target)
{
found=1;
position=i;
break;
}
}
if(found==1)
{
printf("element is found in erray and its place is : %d ",position);
}
else
{
printf("element is not found");
}
}