#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2];
    int i,j;
    int row,col;
    printf("Enter row number:");
    scanf("%d",&row);
    printf("Enter column number:");
    scanf("%d",&col);
    printf("Enter matrix elements");
    for(i=0;i<row;i++) // row
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is \n");
    for(i=0;i<row;i++) // row
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
