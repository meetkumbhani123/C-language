#include <stdio.h>
 
void main()
{
    int i, num1, num2, count = 0, sum = 0;
 
    printf("Enter the value of num1 and num2 : \n");
    scanf("%d %d", &num1, &num2);
    i=num1;
    printf("Integers divisible by 2 are \n");
    while( i <= num2)
    {
        if (i % 2 == 0)
        {
            printf("%d,", i);
            count++;
            sum = sum + i;
            }
        
        i++;
    }
    printf("\n Number of integers divisible by 2 between %d and %d = %d \n", num1, num2, count);
    printf("Sum of all integers that are divisible by 2 = %d\n", sum);
}