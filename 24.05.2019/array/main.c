#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The entered marks are -");
    for(i=0;i<10;i++)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}
