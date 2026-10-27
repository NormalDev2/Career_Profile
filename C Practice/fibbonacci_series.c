/*26070122264, Madhav Shekhar Bhawsar, CSE C2*/
/*Experiemnt 9*/


//PRN 26070122318
//Recursive Functions (Fibonacci Series)


#include <stdio.h>

int fib(int n)
{
    if (n == 0){
        return 0;
    };

    if (n == 1){
        return 1;
    };

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Fibonacci Values till %d\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fib(i));
    };
    return 0;
}
