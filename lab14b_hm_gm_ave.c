
#include<stdio.h>
void main()
{
int i,n,sum=0,p=1;
float ave,resm=0,gm,hm;
printf("enter the number : ");
scanf("%d",&n);
int a[n];
printf(" enter the elements of the array:\n ");
for(i=0;i<n;i++)
{
printf("a[%d] :",i);
scanf("%d",&a[i]);
sum=sum+a[i];
p=p*a[i];
resm+=(float)1/a[i];
}
ave=(float)sum/(n);
gm=pow(p,1/(float)n);
hm=n/resm;
printf("harmonic sum=%f",hm);
printf("\ngeomatic sum=%f",gm);
printf("\naverage=%f",ave);
}