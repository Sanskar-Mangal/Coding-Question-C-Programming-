#include <stdio.h>

int main()
{
    int num,i,f,r,sum=0,temp;    // 145 = 1! + 4! + 5! = 1+24+120 = 145 
    printf("enter the number :");
    scanf("%d",&num);
    temp=num;
    while(num){
        i=f=1;
        r=num%10;    //145%10 =5
        
        while(i<=r){
            f=f*i;    // !5 = 120 5 4 3 2 1 
            i++;
        }
        
        sum=sum+f;
        num=num/10;    //145/10=14
    }
if(sum==temp)
    printf("%d is the strong number :",sum);
else
    printf("%d is not the strong number :",sum);
 
}