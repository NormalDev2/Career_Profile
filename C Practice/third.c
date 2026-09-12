// program to test divisiblity 

#include <stdio.h>

int main()
{
    int i;
    int j; 
    int c;
    printf("whats the value of number 1: "); // input value for variable i
    scanf("%d", &i);
    printf("whats the value of number 2: "); // input value for variable j
    scanf("%d", &j);
    c = i%j; // finds the remainder of the division of i and j
    if (c == 0) // condition
    {
        printf("the numbers are divisble"); 
    }
    else if (c != 0) // condition 
    {
        printf("the numbers are not divisible");
    }
    
    
    return 0;
}
