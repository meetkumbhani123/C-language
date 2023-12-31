#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    int matrix[rows][cols];

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
    int sum = 0;
    printf("Diagonal elements and their sum:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];         
    }
    printf("\nSum of diagonal elements: %d\n", sum);

    return 0;
}
