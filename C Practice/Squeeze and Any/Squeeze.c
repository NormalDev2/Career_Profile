/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in 
s1 that matches any character in the string s2.  */
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
void squeeze(char s1[], char s2[]){

    int i, j, k = 0;

    for(i = 0; s1[i] != '\0'; i++){
        if(contains(s2, s1[i]) == 0){
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
    printf("%s", s1);



}

int main(){
    char s1[50], s2[50] = "\0";

    printf("What is string 1?: ");
    scanf("%s", s1);

    printf("What is string 2?: ");
    scanf("%s", s2);

    squeeze(s1,s2);
}