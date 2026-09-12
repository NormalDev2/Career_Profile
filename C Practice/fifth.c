#include <stdio.h>

int main(){
    int num, n;
    n = 1;
    printf("what is the number for which you require the multiplication table?: ");
    scanf("%d", &num);
    
    while(n <= 10){
        printf("%d\n", num*n);
        n++;
    }
    
}