#include <stdio.h>
#include<string.h>

int main()
{
    //reverse string 
    char str[10];
    int len,i;
    printf("enter a string :");
    scanf("%s",&str);
    len=strlen(str);
    printf("Reverse String is : ");
   // printf("%d",len);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}

