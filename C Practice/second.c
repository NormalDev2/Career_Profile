// number of occurance of digits in the input buffer
#include <stdio.h>

int main()
{
    int nd, c;
    nd = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++nd;
    }
    printf("%d\n", nd);

    return 0;
}
