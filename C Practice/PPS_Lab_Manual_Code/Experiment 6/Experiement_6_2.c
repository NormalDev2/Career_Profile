/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/
// Concatination and Comparision of Strings
#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[50], s3[50] = "\0";
    printf("What is the value of string 1: ");
    scanf("%s", s1);

    printf("What is the value of string 2: ");
    scanf("%s", s2);

    strcpy(s3, s1);
    
    strcat(s1, s2);

    printf("Concatenate string = %s\n", s1);

    if(strcmp(s3,s1) == 0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    
    return 0;

}