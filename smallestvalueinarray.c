#include <stdio.h>

int main()
{
    int arr[100],n,i,min;
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
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n %d minimum value of array",min);

    return 0;
}
