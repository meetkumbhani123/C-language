#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the siz e of array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter arr[%d]=",i );
		scanf("%d",&a[i]);
	}
	printf("reverse order of array is : ");
	for(i=n-1;i>=0;i--)
	{
		printf("\tarr[%d]= %d",i,a[i]);
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d",i,a[i]);
	}
}

