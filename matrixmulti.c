#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],sub[3][3],i,j,k;
	printf("enter the first matrix elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf("enter the second matrix elements");
	for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		scanf("%d",&b[i][j]);
	  		
		}
	  }
	  
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		sub[i][j]=0;
		
		for(k=0;k<3;k++)
		{
			sub[i][j]= sub[i][j] + a[i][k] * b[k][j];
		}
		printf("%d",sub[i][j]);
	    }
	  }
	  
	  
}
