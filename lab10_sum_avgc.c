#include <stdio.h>

int main()
{   
    int c, i=1, sum = 0, n;
    float avg;
    
    printf("Please enter term of n numbers :- ");

    scanf("%d", &n);

    

    while(i <= n)
    {
        printf("Number %d = ", i);
        scanf("%d", &c);
        sum = sum + c;
        i++;
    }

    avg = (float)sum / n;

    printf("\nThe Sum of n Numbers     = %d", sum); 
    printf("\nThe Average of n Numbers = %.2f\n", avg);
}