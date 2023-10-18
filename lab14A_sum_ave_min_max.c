#include<stdio.h>

int main()
{
 int a[100], sum=0;
 int i, n;
 float avg;
 printf("Enter n: ");
 scanf("%d", &n);
 
 
 printf("Enter numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%d", &a[i]);
 }
 
 
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 
 
 avg = sum/n;
 
 
 printf("Sum is %d\n", sum);
 printf("Average is %f", avg);
 
 return 0;
}