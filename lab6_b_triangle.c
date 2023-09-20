#include<stdio.h>
void main()
{
	int a,b,c,maxside;
	printf("enter the value of a,b,c : ");
	scanf("%d %d %d",&a,&b,&c);
	maxside=a;
	if(b>maxside)
	{
		maxside=b;
	}
	if (c>maxside)
	{
		maxside=c;
	}
	if(maxside*maxside==a*a+b*b || maxside*maxside==c*c+a*a || maxside*maxside==b*b+c*c)
		{
		printf("\ntriange is right side");
		}       
	if(a==b && b==c)
	{
		printf("\ntriangle is equilateral");
	}
	else if(a==b || a==c ||b==c)
	{
		printf("\ntriangle isosceles");
	}
	else 
	{
     printf("\ntriangle is isscalene  ");
 }
}
