#include <stdio.h>

int main()
{
    int num,i,result=1;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        result=i*result;
        
    }
    printf("Factorial number is :%d",result);

    return 0;
}