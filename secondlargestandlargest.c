#include <stdio.h>
#include<string.h>
#include<limits.h>


int main()
{
    int arr[100],n,i,max1,max2;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter the element in array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max1=max2=INT_MIN;
    for(i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    // printf("largest value is :%d",max1);
    printf("second largest is : %d",max2);
    
    return 0;
}