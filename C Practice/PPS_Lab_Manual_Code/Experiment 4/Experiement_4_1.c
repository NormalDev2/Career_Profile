/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/
/*Write a C program to accept N elements into a one-dimensional 
array and display all the elements.*/
#include <stdio.h>
int main(){
    int n = 0;
    int i = 0;
   
    printf("How many elements will your array have?: ");
    scanf("%d", &n);

     int s[n];

    for(i = 0; i < n; i++){
        scanf("%d", &s[i]);
    }

    //Display the N elements provided

    for(i = 0; i < n; i++){
        printf("%d\t", s[i]);
    }


}

