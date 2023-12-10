#include<stdio.h>
void main()
{
	  int a[3][3],b[3][3],i,j;
	  printf("enter the first matrix element :\n");
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		scanf("\t%d",&a[i][j]);
	    }
	    printf("\n");
	  }
	  
	 // b[i][j]=a[j][i];
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		b[i][j]=a[j][i];
	  		printf("\t%d",b[i][j]);
	    }
	    printf("\n");
	  }
	  
}
