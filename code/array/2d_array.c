#include<stdio.h>

int main(){
    int i, j, row, col;

    // Prompt the user to enter the size of the 2D array
    printf("Enter the size of the 2D array\n");
    scanf("%d %d", &row, &col);

    // Declare a 2D array with the given size
    int arr[row][col];

    // Prompt the user to enter the elements of the 2D array
    printf("Enter the elements of the 2D array\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the elements of the 2D array
    printf("The elements of the 2D array are\n");
    for(i = 0; i < row; i++){ // Added missing loop condition
        for(j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0; // Added return statement
}