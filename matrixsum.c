#include<stdio.h>
#include<conio.h>
void main()
{
	  int a[3][3],b[3][3],sum[3][3],i,j;
	  printf("enter the first matrix elements");
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		scanf("%d",&a[i][j]);
		}
		printf("\n");
	  }
	  
	  printf("enter the second matrix elements");
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		scanf("%d",&b[i][j]);
		}
		printf("\n");
	  }
	  
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		sum[i][j]= a[i][j]+b[i][j];
	  		printf("%d",sum[i][j]);
		}
	  }
	  
	  
}
