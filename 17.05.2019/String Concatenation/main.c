#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char fn[50]={'A','r','i','f',' ','\0'};
    char mn[7]={'A','l','m','a','s',' ','\0'};
    char ln[7]={'S','h','u','v','o',' ','\0'};
    char tl[4]={'V','I','\0'};
    char fullname[50];
    strcat(fn,mn);
    strcat(fn,ln);
    strcat(fn,tl);
    puts(fn);
    puts(fullname);
    strcpy(fullname,fn);
    puts(fullname);
    return 0;
}
