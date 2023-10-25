#include<stdio.h>
int min(int,int);
int max(int,int);

void main()
{
	int a,b;
	printf("enter the value of range  m and n : ");
	scanf("%d %d",&a,&b);
	int result=min(a,b);
	int result2=max(a,b);
	printf("min=%d, max= %d",result,result2);
}
int min(int a,int b)
{    
    
		if(a<b)
		{
			return a;
		}
		else
		{
			return b;
		}

}
	int max(int i,int k)
	{
		
		if(i>k)
		{
			return i ;
		}
		else
		{
			return k;
		}
	}
