#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void delet_end();
void delet_front();
void delet_pos();
struct node{
	int data;
	struct node *next;
};
struct node *s=NULL;
int main()
{
	int choice;
	while(1)
	{
		printf("....Welcome to linked list....\n");
		printf("1. create \n");
        printf("2. display \n");
		printf("3. delet_end \n");
		printf("4. delet_front \n");
		printf("5. delet_pos \n");
		printf("6. exit \n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
	         case 1: create();
			       	 break;	
			 case 2: display();
			       	 break;
			 case 3: delet_end();
			       	 break;	
			 case 4: delet_front();
			       	 break;
			 case 5: delet_pos();
			         break;      	 
			 case 6: exit(0);
			       	 break;	
				default: printf("invalid choice");					
	 	}		
	}
return 0;	
}

void create()
{
	struct node *p,*s1;
	p=(struct node*) malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&p->data);
	p->next=NULL;
	if(s==NULL)
	{
		s=p;
	}
	else
	{
		s1=s;
		while(s1->next!=NULL)
		{
			s1=s1->next;
		}
		s1->next=p;
	}
}
void display() 
{
	struct node *s1;
	if(s==NULL)
	{
		printf("list is empty");
		return;
	}
	else
	{
		s1=s;
		printf("the element are :\n");
		while(s1!=NULL)
		{
			printf("%d",s1->data);
			s1=s1->next;
		}
	}
	
}
void delet_end()
{
	struct node *s1, *temp;
	if(s==NULL)
	{
		printf("list is empty \n");
		exit(0);
	}
	else if(s->next==NULL)
	{
		s1=s;
		s=NULL;
		printf("the deleted element is %d",s1->data);
		free(s1);
	}
	else
	{
		s1=s;
		while(s1->next != NULL)
		{
			temp=s1;
			s1=s1->next;
			
		}
		temp->next=NULL;
		printf("the deleted element is %d",s1->data);
		free(s1);
	}
}

void delet_front()
{
	struct node *temp;
	if(s==NULL)
	{
		printf("list is empty\n");
		exit(0);
		
	}
	else
	{
		temp=s;
		s=s->next;
		printf("deleted element is %d",s->data);
		free(temp);
	}
}

void delet_pos()
{
	struct node *s1,*temp;
	int i, pos ;
	printf("enter the position from where you want to delet \n");
	scanf("%d",&pos);
	if(pos==0)
	{
		s1=s;
		s=s->next;
		printf("deleted element %d",s1->data);
		free(s1);
		
	}	
	else
	{
		s1=s;
		for(i=0;i<pos;i++ && s1->next!=NULL)
		{
			temp=s1;
			s1=s1->next;
			
		}
		temp->next=s1->next;
		printf("deleted element %d",s1->data);
		free(s1);		
		
	}
}
