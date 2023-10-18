#include <stdio.h>

int main() {
    int height[5];
    int weight[5];
    int count = 0;

    
    printf("Enter height and weight for five persons:\n");
    for (int i = 0; i < 5; i++) {
        printf("Person %d - Height: ", i );
        scanf("%d", &height[i]);
        printf("Person %d - Weight: ", i );
        scanf("%d", &weight[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        if (height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }

    
    printf("Number of persons with height > 170 and weight < 50: %d\n", count);

    return 0;
}
