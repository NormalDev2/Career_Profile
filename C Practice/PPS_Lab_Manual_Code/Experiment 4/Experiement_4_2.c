/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/
/*Find Sum and Average of Array Elements*/
#include <stdio.h>
int main(){
    int Sum = 0;
    float Average = 0; 
    int n, i = 0;
    printf("What is the size of the array?: ");
    scanf("%d", &n);

    int s[n];
    printf("Write the elements of the following: ");
    for(i = 0; i < n; i++){
        scanf("%d", &s[i]);
    }

    for (i = 0; i < n; i++){
        Sum = Sum + s[i];
    }
    Average = (float)Sum/n;
    
    for (i = 0; i < n; i++){
        printf("%d\t", s[i]);
    }

    printf("\n");
    printf("Sum: %d\n", Sum);
    printf("Average: %f", Average);



}