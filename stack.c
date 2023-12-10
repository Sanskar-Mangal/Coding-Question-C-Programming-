// program stack using array in data structure.


#include<stdio.h>
#define max 5
int a[max],top=-1;
void push();
void pop();
void display();
int main()
{
	   int ch;
	   printf("1. push operation \n");
	   printf("2. pop operation \n");
	   printf("3. display \n");
	   printf("4. exit program");
	   
	   while(1)
	   {
	   	  printf("\n enter choice :");
	   	  scanf("%d",&ch);
	   	  
	   
	   
	   switch(ch)
	   {
	   	   case 1:
	   	   	{
				  
	   	   	   push();
	   	   	   break;
	   	    }
	   	   case 2:
			 {
			 	pop();
			 	break;
		     }
		    case 3:
		    	{
		    		display();
		    		break;
				}
			case 4:
				{
					exit(0);
					
				}
			default:
				{ 
                   	printf("wrong choice");
		
		        }
		}	
	   }
	   
}

void push()
{
	  int data;
	  if(top==max-1)
	  {
	  	printf("stack is overflow");
	  }
	  else
	  {
	  	  printf("enter the element");
	  	  scanf("%d",&data);
	  	  top++;
	  	  a[top]=data;
	  	  printf("successfully");
	  }
}

void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
		
	}
	else
	{
		printf("popped element : %d",a[top]);
		top--;
		printf("successfully");
	}
}

void display()
{
	
	int i;
	if(top>=0)
	{
		printf("elements:");
		for(i=top;i>=0;i--)
		{
			printf("%d",a[i]);
		}
		
	}
	else
	{
		printf("the stack is empty");
	}
}
