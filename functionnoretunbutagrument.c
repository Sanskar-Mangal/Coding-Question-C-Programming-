#include<stdio.h>
#include<conio.h>
void add(int x, int y);
void main()
{
	int a,b;
	printf("enter two number \n");
	scanf("%d%d",&a,&b);
	add(a,b);
	
}
void add(int x, int y)
{
	int z;
	z=x+y;
	printf("sum of two digit number = %d",z);
}

