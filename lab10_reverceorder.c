#include <stdio.h>

int main()

{

int num,c;

printf("enter the number: ");

scanf("%d",&num);

while(num!=0)
{
c=num%10;
printf("%d",c);
num=num/10;
}
}