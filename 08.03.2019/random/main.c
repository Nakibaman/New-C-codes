#include <stdio.h>
#include <stdlib.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int n;
    n=rand()%6+1;

    printf("%d",n);
    return 0;
}
