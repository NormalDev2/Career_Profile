/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/
// Problem 1: Length and Copy of a string 
#include <stdio.h>
#include <string.h>

int main(){
    char i[50] , j[50] = "\0";
    printf("what is the string?: ");
    scanf("%s", i);

    printf("The string length is: %d\n",strlen(i)); // Prints the length of the given string
    strcpy(j,i);
    printf("The second string is: %s", j); // Copies the the given string into another
    return 0;
}