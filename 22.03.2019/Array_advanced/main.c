#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int i;
    int sum;
    sum=0;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        sum=sum+a[i];
    printf("Sum is %d",sum);
    return 0;
}
