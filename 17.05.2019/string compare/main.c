#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name1[5]={'A','r','i','f','\0'};
    char name2[7]={'Z','a','r','i','f','a','\0'};
    int n;
    n=strcmp(name2,name1);
    printf("%d",n);
    return 0;
}
