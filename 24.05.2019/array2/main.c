#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[5]={2,-3,0,-9,-4};
    printf("Positive numbers are:");
    for(i=0;i<5;i++)
    {
    if(a[i]>=0)
        printf("%d ",a[i]);
    }
    printf("\n Negative numbers are:");
    for(i=0;i<5;i++)
    {
    if(a[i]<0)
        printf("%d ",a[i]);
    }
    return 0;
}
