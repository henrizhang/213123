#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int i;
    int gcd=1;
    int limit;

    if (x<y){
        limit = x;
    }
    else {
        limit = y;
    }

    for(i=limit; i > 0; i--)
    {
        if (x%i==0 && y%i==0){
            gcd = i;
            break;
        }
    }

    printf("%d\n", gcd);

    return 0;
}