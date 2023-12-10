#include <stdio.h>

int main()
{
    int arr[100],n,i,sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the given array");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nsum of array element :");
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    printf("%d",sum);
   
}
