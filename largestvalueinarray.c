#include <stdio.h>

int main()
{
    int arr[100],n,i,max;
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
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\n %d maximum value of array",max);

    return 0;
}
