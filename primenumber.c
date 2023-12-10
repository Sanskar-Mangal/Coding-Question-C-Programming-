#include <stdio.h>
#include<conio.h>

int main()
{
	
    //check prime number only one number
    int num,i,count=0;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
    

    return 0;
    getch();
}
