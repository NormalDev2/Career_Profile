/*Madhav Shekhar Bhawsar, C2-CSE, 26070122264*/
// Display Digonal elements

#include <stdio.h>
int main(){

   int rows, columns, i, j;
    printf("Enter number of rows and coloumns: ");
    scanf("%d", &rows);
    scanf("%d", &columns);
    int A[rows][columns]; 

    printf("Write the values of all the elements: ");

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");

     for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            if(i == j){
                printf("%d\t", A[i][j]);
            }
        }
    }
}