/*Madhav Shekhar Bhawsar, C2-CSE, 26070122264 */
//Addition of two matrices
#include <stdio.h>

int main(){
   int rows, columns, i, j;
    printf("Enter number of rows and coloumns: ");
    scanf("%d", &rows);
    scanf("%d", &columns);
    int A[rows][columns]; 
    int B[rows][columns];
    int C[rows][columns];

    printf("Write the values of all the elements (A): ");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Write the values of all the elements (B): ");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            scanf("%d", &B[i][j]);
        }
    }

    //Summation of the two matrices
    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
     printf("Printing the 2D array in tabular format\n");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
}