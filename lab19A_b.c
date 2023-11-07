#include<stdio.h>
void printarray(int arr[],int n);
void main()
{
	int n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("arr [%d]:",i);
		scanf("%d",&arr[i]);
	}
	printarray(arr,n);
		
	
}
	void printarray(int arr[],int n)
	
	{
		int i;
		for(i=0;i<n;i++)
		{
				printf("%d ",arr[i]);
		}
		
		
	}


