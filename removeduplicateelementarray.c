#include <stdio.h>

void main()
{
    int arr[100],n,i,j,k;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;++j){
            if(arr[i]==arr[j]){
             for(k=j;k<n;k++){
             	arr[k]=arr[k+1];
                }   
                  n--;
                  j--;
            }
        }
    }
     printf("\nRemove duplicate element of array :");
       for(i=0;i<n;i++){
	      printf("%d",arr[i]);
	 }
	 
}
    
    
    
   
