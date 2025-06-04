#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &a, &b);
    int matrix1[a][b], matrix2[a][b], sum[a][b];
    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Adding the two matrices
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Displaying the sum of the matrices
    printf("The sum of the two matrices is:\n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}