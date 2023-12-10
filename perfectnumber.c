#include <stdio.h>

int main()
{
  int num,i,sum=0;    //input 6----1+2+3 = 6   jo puri tharhe se divided kr de and 14 not perfect number
  printf("enter the number :");
  scanf("%d",&num);
  for(i=1;i<num;i++){
      if(num%i==0){
          sum=sum+i;
      }
  }
  if(sum==num){
      printf("perfect number");
  }
  else{
    printf("not perfect numbr");
  }
 
    return 0;
}