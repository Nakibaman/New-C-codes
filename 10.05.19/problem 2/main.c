#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,e;
    e=0;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf(" %d ",i);
        if(i%2==0)
            e++;
    }
    printf("\nNo of even number is %d",e);
    return 0;
}
