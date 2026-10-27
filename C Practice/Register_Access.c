/*Madhav Shekhar Bhawsar, CSE-C2, 26070122264*/

#include <stdio.h>

int main(){

    register int i;
    int sum = 0; 

    for(i = 1; i < 5; i++){
        sum = sum + i;
        printf("i = %d sum = %d\n", i, sum);

    }

    printf("Final sum = %d\n", sum);

    return 0;
}
