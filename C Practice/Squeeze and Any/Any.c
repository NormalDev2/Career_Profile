/*Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. 
(The standard library function strpbrk does the same job but returns a pointer to the 
location.)  */
#include <stdio.h>
// To check if c is contained in s2
int contains(char s2[], char c){
    int j, found = 0;
    for(j = 0; s2[j] != '\0'; ++j){
            if(s2[j] == c){
                found = 1;
                break;
            }
        }
    return found;
}
int any(char s1[], char s2[]){

    int i = 0;
    int found = -1;

    for(i = 0; s1[i] != '\0'; i++){
        if(contains(s2, s1[i]) == 1){
            found = 1;
            break;
        }
    }
    return found;
}

int main(){
    char s1[50], s2[50] = "\0";

    printf("What is string 1?: ");
    scanf("%s", s1);

    printf("What is string 2?: ");
    scanf("%s", s2);

    printf("%d", any(s1,s2));
}