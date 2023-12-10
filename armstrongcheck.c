#include <stdio.h>
#include<math.h>

int main()
{
   int num,armg=0,c,rem,len,count=0;
   printf("enter the number :");
   scanf("%d",&num);
   c=num;
   while(num!=0)  
   {  
       num=num/10;  
       count++;  
   }  
   printf("%d total digit",count);
   
  
   while(num>0){
       rem=num%10;
       armg =pow(rem,count)+armg;
       num=num/10;
   }
   if(c==armg)
       printf("\n armstrong number");
   
   else
       printf("\n not armstrong number ");
   
  
}   
