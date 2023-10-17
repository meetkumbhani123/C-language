#include<stdio.h>
void main()
{
	int n,i,j,countp=0,countn=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elements arr[%d] = ",i);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
		
			countp++;
		
		}
		else
		{
			
			countn++;
			
		}
		
	}
		
			printf("positive : %d",countp);
	
			printf("\nnagative : %d",countn);
		
}
