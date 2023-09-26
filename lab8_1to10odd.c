#include<stdio.h>
void main()
{
	int a,i=1;
	printf("enter the value of a");
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2!=0)
		{
			printf("odd=%d\n",i);
		}
		i++;
		/*else
		{
			printf("odd=%d\n",i);
			i++;
		}*/
	}
}
