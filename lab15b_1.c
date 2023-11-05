
#include <stdio.h>

int main() {
    int arr[100], n, i, j, duplicate;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        duplicate = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate==0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


