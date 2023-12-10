#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("enter the value a");
    scanf("%d",&a);
    printf("enter the value b");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("%d",a);
    printf("%d",b);
}