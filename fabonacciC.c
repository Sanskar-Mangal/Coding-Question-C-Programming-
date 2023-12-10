#include <stdio.h>

int main()
{
    int num,i,a=-1,b=1,c;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }

    return 0;
}