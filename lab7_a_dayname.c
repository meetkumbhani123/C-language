#include<stdio.h>
void main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	
	switch(n%7)
	{
	
	case 0:
		printf("sunday");
		break;
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesday");
		break;
	case 3:
		printf("thursday");
		break;
	case 4:
		printf("wensday");
		break;
	case 5:
		printf("friday");
		break;
	case 6:
		prinf("saturday");
		break;
	}
}
