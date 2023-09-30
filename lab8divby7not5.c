#include <stdio.h>
 
void main()
{
    int i, num1=100, num2=200, count = 0, sum = 0;
 
    
    i=num1;
    printf("Integers divisible by 7 but not divisible by 5 are \n");
    while( i <= num2)
    {
        if ((i % 7 == 0) && (i%5!=0))
        {
            printf("%d,", i);
            
            
            }
            
            
            
           
        
        i++;
    }
    }