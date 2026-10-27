/*26070122264, Madhav Shekhar Bhawsar, CSE C2*/
/*Experiemnt 9*/
#include <stdio.h>

int factorial(int n) {

        if (n==0) {
            return 1;
        }
        
        return n*factorial(n-1);
    }

int main() {
    int n, ans;

    printf("Enter a number: ");
    scanf("%d",&n);

    ans=factorial(n);
    printf("The factorial of %d is %d",n,ans);

    return 0;
}
