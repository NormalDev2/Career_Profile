#include <stdio.h>
#define OUT 1
#define IN 0
int main()
{
    int nw, nc, nl, c, STATE;
    nw = nc = nl = 0;
    STATE = OUT;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' '|| c == '\n'|| c =='\t')
            STATE = OUT;
        else if (STATE == OUT)
        {
            STATE = IN;
            ++nw;
        }
        
    }
    printf("%d %d %d", nw, nl, nc);
    return 0;
}

