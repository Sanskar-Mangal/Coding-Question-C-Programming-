#include<stdio.h>
#include<conio.h>
void printline();
void main()
{
	printline();
	printf("\n welcome to c programming\n");
	printline();
	
}
void printline()
{
	int i;
	for(i=1;i<=40;i++)
	{
		printf("*");
	}
}
