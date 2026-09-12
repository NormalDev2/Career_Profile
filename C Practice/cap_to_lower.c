    #include <stdio.h>
    char l(char c){
        if(c >= 'A' && c <= 'Z'){
            return c + ('a' - 'A');
        }
        else
            return c;
    }
    int main(){
        char i; 
        printf("Lower?: ");
        scanf("%c", &i);
        printf("%c", l(i));

    }