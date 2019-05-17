#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2]={{1,2},
                 {2,1}};
    int i,j;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
