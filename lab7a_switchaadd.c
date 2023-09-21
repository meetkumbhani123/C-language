#include<stdio.h>
void main()
{
int a,b,choice;
printf("1-add");
printf("\n2-sub");
printf("\n3-malt");
printf("\n4-divide");
printf("\nenter the a : ");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b);
printf("enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("add %d",a+b);
break;
case 2:
printf("sub %d",a-b);
break;
case 3:
printf("malt %d",a*b);
break;
case 4:
printf("div %d", a/b);
break;
default:
printf(" select valid choice");
break;
}

}