#include <stdio.h>

int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    if(year%4==0 || year%400==0){
        printf("this is leap year :%d",year);
    }
    else{
        printf("not leap year : %d",year);
    }

    return 0;
}