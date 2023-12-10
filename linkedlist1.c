#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void insert_end();
void insert_front();
void insert_pos();
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
		printf("3. insert_end \n");
		printf("4. insert_front \n");
		printf("5. insert_pos \n");
		printf("6. exit \n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
	         case 1: create();
			       	 break;	
			 case 2: display();
			       	 break;
			 case 3: insert_end();
			       	 break;	
			 case 4: insert_front();
			       	 break;
			 case 5: insert_pos();
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
void insert_end()
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

void insert_front()
{
	struct node *p;
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
    	p->next=s;
    	s=p;
	}
}

void insert_pos()
{
	struct node *p,*s1;
	int pos,i;
	p=(struct node *) malloc(sizeof(struct node));
	printf("\n enter thr postion of element ");
	scanf("%d",&pos);
	printf("\n enter the element\n");
	p->next=NULL;
	if(pos==0)
	{
		p->next=s;
		s=p;
	}
	else
	{
		s1=s;
		for
	}
}
