#include<stdio.h>
void main()
{
	  int a[10],low=0,high,i,n,mid,item,flag=0;
	  printf("enter the size of array");
	  scanf("%d",&n);
	  printf("enter the elements");
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  high=n;
	  low=0;
	  
	  printf("enter the search element");
	  scanf("%d",&item);
	  while(low<=high)
	  {
	  	  mid=(low+high)/2;
	  	  if(a[mid]<item)
	  	  {
	  	  	low=mid+1;
		  }
		  
		  else if(a[mid]>item)
		  {
		  	high=mid-1;
		  }
		  
		  else if(a[mid]==item)
		  {
		  	flag=1;
		  	break;
		  }
	  }
	  
	  if(flag==1)
	  {
	  	printf("element found at location %d",mid);
	  }
	  else
	  {
	  	printf("not success");
	  }
}
