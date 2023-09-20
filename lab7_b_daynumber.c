#include<stdio.h>
void main()
{
	int n;
	printf("enter the n");
	scanf("%d",&n);
	switch(n%12)
	{
	
	case 0:
		printf("january: 31");
		break;
	case 1:
		printf("february :28/29");
		break;	
		case 2:
		printf("march: 31");
		break;
		case 3:
		printf("april: 30");
		break;
		case 4:
		printf("may: 31");
		break;
		case 5:
		printf("june: 30");
		break;
		case 6:
		printf("july: 31");
		break;
		case 7:
		printf("auguest: 31");
		break;
		case 8:
		printf("september: 30");
		break;
		case 9:
		printf("octember: 31");
		break;
		case 10:
		printf("november: 30");
		break;
		case 11:
		printf("december: 31");
		break;
	}
		
}
