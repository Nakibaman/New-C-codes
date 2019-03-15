#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={23,34,5};
    printf("Array after initialization\n");
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    a[0]=100;
    a[2]=23;
    printf("Array after modification:\n");
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    return 0;
}
