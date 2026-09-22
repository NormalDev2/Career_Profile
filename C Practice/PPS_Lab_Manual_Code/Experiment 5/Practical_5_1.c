/*Madhav Shekhar Bhawsar, C2-CSE, 26070122264*/
// Print 2D array in tabular format
#include <stdio.h>

int main(){
    int rows, columns, i, j;
    printf("Enter number of rows and coloumns: ");
    scanf("%d", &rows);
    scanf("%d", &columns);
    int A[rows][columns]; 

    printf("Write the values of all the elements");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            scanf("%d", &A[i][j]);
        }
    }

    //Printing the 2D array in the tabular format 

    printf("Printing the 2D array in tabular format\n");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}




