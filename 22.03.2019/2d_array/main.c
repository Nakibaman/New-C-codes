#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][4]= {{12,11,10,9},{8,7,6,5},{4,3,2,1}};
    int i,j;
    for(i=0; i<=2; i++) // row
    {
        for(j=0; j<=3; j++) // column
        {
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
