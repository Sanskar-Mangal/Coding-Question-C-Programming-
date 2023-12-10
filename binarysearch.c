#include<stdio.h>
void main(){
	int arr[100],num,item,i,left=0,mid=0;
	printf("enter the array size");
	scanf("%d",&num);
	printf("enter the sorted array");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
		}
	printf("enter the search element :");
	scanf("%d",&item);
	for(i=0;i<num;i++){
		if(num>=left){
			mid=left + (num-left)/2;
			printf("index found is %d",mid);
			break;
		}
//		else if(arr[i]==item){
//			printf("mid %d",i);
//			break;
//		}
		else if(arr[mid] < item){
			left = mid + 1;
			printf("index %d",left);
			break;
		}
		else if(arr[mid] > item){
			num = mid - 1;
			printf("index %d",num);
			break;
		}
		
	}
}
