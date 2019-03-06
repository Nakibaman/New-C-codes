#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num==5)
        printf("\nThe number is 5");
    else if(num>5)
        printf("\nThe number is greater than 5");
    else
        printf("\nThe number is smaller than 5");
    return 0;
}
