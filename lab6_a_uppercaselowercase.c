#include <stdio.h>
void main()
{
char n;
printf("enter the charcter : ");
scanf("%c",&n);
if(n>=47 && n<=57)
{ 
printf("you have entered the digit");
}
  
  else
  {
    if(n>=65 && n<=90)
    {
    printf("you have entered upper case");
    }
    else
    if(n>=97 && n<=122)
    {
    printf("you have enter the lower case");
    }
    else
    {
    printf("you have entered special symbol");
    }
  }
  
  }