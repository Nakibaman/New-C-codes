#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0 && year%400==0)
            printf("Leap year");
        else if(year%100==0 && year%400!=0)
            printf("Not leap year");
        else
            printf("Leap year");
    }
    else
        printf("Not leap year");
    return 0;
}
