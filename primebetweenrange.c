#include <stdio.h>

int main()
{
    //check prime number between range
    int num1,num2,i,x;
    printf("enter the first number :");
    scanf("%d",&num1);
    printf("enter the second number :");
    scanf("%d",&num2);
    for(x=num1+1;x<=num2;x++){
        for(i=2;i<x;i++){
            if(x%i==0){
                break;
            }
        }
        if(i==x){
            printf("%d ",x);
        }
    }
  
    

    return 0;
}
