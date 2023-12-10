#include<stdio.h>
void main()
{
	int a[5],n,i=0,item,j;
	printf("enter the size of array");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	
	printf("input searching element");
	scanf("%d",&item);
	while(i<j)
	{
		if(a[i]==item)
		{
			printf("item found %d",i);
			break;
		}
		i++;
		
	}
	printf("item not found");
}
