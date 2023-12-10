#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,len,flag=0;
    printf("enter the strinf to check for palindrome :");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
if(flag==0){
    printf("string is palindrome");
}    
else{
    printf("string not palindrome");
}    

    return 0;
}
