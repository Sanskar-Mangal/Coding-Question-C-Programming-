#include <stdio.h>

int main()
{
    //print Nth prime number 
    int num,i,x=2;
    printf("Enter the Nth prime number :");
    scanf("%d",&num);
    printf("Nth Prime number is :");
    while(num){
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
            
            if(i==x){
                printf("%d " , x);
                num--;
            }
          x++;   
        }
    
}


