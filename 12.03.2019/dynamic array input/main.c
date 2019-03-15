#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    printf("Enter number of students:");
    scanf("%d",&n);
    int bng_mrks[n];
    printf("Enter bangla marks of %d students",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bng_mrks[i]);
    }
    return 0;
}
