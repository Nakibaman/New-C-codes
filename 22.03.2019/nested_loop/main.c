#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==1||i==4||j==1||j==3)
                printf("*  ",i,j);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
