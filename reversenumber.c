#include <stdio.h>

int main()
{
    //input 234------432
    int num,remainder;
    printf("enter the number :");
    scanf("%d",&num);
    printf("Reverse number is :");
    while(num>0){
        remainder=num%10;   // 234%10---4,  num value is 23 loop chl tah rhega
        printf("%d",remainder);
        num=num/10;
    }
    return 0;
}

