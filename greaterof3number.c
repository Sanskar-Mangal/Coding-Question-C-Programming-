#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter the first number :");
   scanf("%d",&a);
   printf("enter the second number :");
   scanf("%d",&b);
   printf("enter the third number :");
   scanf("%d",&c);
   
   if(a>=b && a>=c){
       printf("%d is a greater ",a);
   }
   if(b>=a && b>=c){
       printf("%d is a greater ",b);
   }
   else{
       printf("%d is a greater ",c);
   }
  
}   
