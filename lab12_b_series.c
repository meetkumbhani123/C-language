#include<stdio.h>
int main()
{
 int n, sum,i,j;

 printf("Please enter an integer, n = ");
 scanf("%d", &n);

 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
     {
         sum = sum + n;
 
 }

}
printf("sum = %d", sum);
 return 0;
}