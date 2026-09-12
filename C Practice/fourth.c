// printing the ascii respresentation of all the characters there are in the character array

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int d = 0;
    int f;
    printf("what is the length of the string: ");
    scanf("%d", &n);

    getchar(); // To remove the new line character out of the input buffer
               // after we press enter in the \n new line character is taken as scanf is dealing with characters. 

    char i[n] ;
    printf("\nwhat is the string?: ");
    scanf("%s", &i);

    f = strlen(i);

    while(d != f + 1){
        printf("For  %c  the value is  %d \n ", i[d], i[d]);
        ++d;
        
    }
    

    return 0;
}

