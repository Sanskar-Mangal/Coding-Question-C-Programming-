#include <stdio.h>

int main()
{
    int arr[100],n,i,j,temp;
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
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];   //swapping 
                arr[j]=temp;
            }
        }
    }
    printf("\n Ascending array sorted :");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
   
}

