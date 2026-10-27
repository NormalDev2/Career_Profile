/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/

#include <stdio.h>

void display(){
    static int x = 10;
    printf("%d\n", x);
    x++;
}

int main(){
    display();
    display();
    display();

    return 0;
}
