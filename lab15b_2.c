#include <stdio.h>

int main() {
    int arr[100], size, i, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    int start = 0;
    int end = size - 1;
    for(i=0;i<size;i++) 
    {
        if(start<end)
        {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

       
        start++;
        end--;
        }
    }

    
    printf("Reversed Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}