#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[10]={'N','a','k','\0'};
    printf("%s",name);
    int n;
    n=strlen(name);
    printf("\n%d",n);
    return 0;
}
