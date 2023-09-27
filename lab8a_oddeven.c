#include<stdio.h>
void main()
{
	int i=1,a,countEven=0,countOdd=0;
	while(i<=10)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("\neven");
			countEven++;
			
		}
		else
		{
			printf("\nodd");
			countOdd++;
			
		}
		i++;
		
	}
	
	printf(" \nodd number: %d\n",countOdd);
	printf("even number : %d",countEven);
}
