#include<stdio.h>
void main(){
	int arr[100],n,item,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the search element");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(arr[i]==item){
			printf("%d found index is : %d",item,i);
		}
	}
}
