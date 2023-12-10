#include <stdio.h>

int main()
{
  int num,reverse=0,temp,rem;
  printf("enter the number :");
  scanf("%d",&num);
  temp=num;
  while(temp != 0){
      rem=temp%10; //reverse 121----value 1
      reverse=reverse *10 +rem;  // 0 x 10 + 1=== 0+1==1
      temp = temp /10;   //temp-- 121/10---12  baar baar chelga
      
  }
  if(reverse==num){
      printf("Palindrome number");
      
  }
  else{
      printf("Not palindrome");
  }
  return 0;
}   
