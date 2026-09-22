/*Madhav Shekhar Bhawsar, 26070122264, CSE-C2*/
/*Find Maximum and Minimum Element*/
#include <stdio.h>
int main(){
    int max, min, i, n = 0;
    printf("How many elements in array?: ");
    scanf("%d", &n);
    int s[n];
    printf("What are the values of array?: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &s[i]);
    }
    max = s[0];
    min = s[0];
    for(i = 0; i < n; i++){
        if (max > s[i]){
            i++;
        }
        else{
             max = s[i];
             i++;
        } 
    }
    for(i = 0; i < n; i++){
        if(min < s[i]){
            i++;
        }
        else{
            min = s[i];
            i++;
        }
    }
    printf("Max: %d\n", max);
    printf("Min %d\n", min);

}