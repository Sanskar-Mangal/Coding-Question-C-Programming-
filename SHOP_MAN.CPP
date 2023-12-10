#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
void password(); //Declaration of function
void menu();
void box(int,int,int,int); //create a rectangle box

void add_product();
void modify_product();
void display_product();
void display_all();
void delete_product();
void delete_all();
void changePassword();

char pname[100];
int pid,pqty,ID;
float pcost;
FILE *fp,*fp1;


void main()
{

 clrscr();
 password(); // call for password
 getch();
}


void password()
{
  FILE *fp;
  char pass1[100],pass2[100],ch;
  int i;

  fp=fopen("password.txt","r");

  if(fp==NULL)
  {
     fclose(fp);
     fp=fopen("password.txt","w");
     fprintf(fp,"sistec123");
     fclose(fp);
  }
  else
  {
    fscanf(fp,"%s",&pass1);
    //printf("Default Password is == %s",pass1);


   textcolor(RED);
   box(25,10,50,12);
   textcolor(LIGHTBLUE);
   gotoxy(26,11);
   printf("Enter Password : ");

  ch=getch();

  i=0;
  while(ch!=13)
  {
    printf("*");
    pass2[i]=ch;
    ch=getch();
    i++;
  }
  pass2[i]='\0';

   if(strcmp(pass1,pass2)==0)
   {

     textcolor(RED);
     box(25,10,50,12);
     textcolor(LIGHTBLUE);
     gotoxy(26,11);
     cprintf("Password Accepted");

     clrscr();
     _setcursortype(_NOCURSOR);
     textcolor(RED);
     box(20,10,47,12);
     textcolor(LIGHTBLUE);
     gotoxy(26,11);
     cprintf("Login Successful");
     delay(3000);
     _setcursortype(_NORMALCURSOR);
     clrscr();     
     menu();

   }
   else
    {
    clrscr();
     _setcursortype(_NOCURSOR);
     textcolor(RED);
     box(20,10,47,12);
     textbackground(YELLOW);
     textcolor(RED);
     gotoxy(26,11);
     cprintf("Access Denied");
     _setcursortype(_NORMALCURSOR);
     textbackground(0);
    }

  }
   

}



void box(int x1,int y1,int x2, int y2)
{
   int i;
   //top wall
   gotoxy(x1,y1);
   cprintf("Ú");
   for(i=x1+1;i<=x2-1;i++)
   cprintf("Ä");
   cprintf("¿");

   //bottom wall
   gotoxy(x1,y2);
   cprintf("À");
   for(i=x1+1;i<=x2-1;i++)
   cprintf("Ä");
   cprintf("Ù");

   //left wall
   gotoxy(x1,y1+1);
   for(i=y1+1;i<=y2-1;i++)
   {
    gotoxy(x1,i);
    cprintf("³");

   }

   //Right wall
   gotoxy(x2,y1+1);
   for(i=y1+1;i<=y2-1;i++)
   {
    gotoxy(x2,i);
    cprintf("³");
   }

}




void menu()
{
  int choice;

  char pname[100];
  int pid,pqty;
  float pcost;

  textcolor(MAGENTA);
  box(26,2,44,4);

  textcolor(YELLOW);
  gotoxy(28,3);
  cprintf("Shop Management");

  textcolor(LIGHTGREEN);
  gotoxy(25,6);
  cprintf("1. Add a Product");
  gotoxy(25,7);
  cprintf("2. Modify a Product");
  gotoxy(25,8);
  cprintf("3. Display or Search a Product");
  gotoxy(25,9);
  cprintf("4. Display all Products");
  gotoxy(25,10);
  cprintf("5. Delete a Product");
  gotoxy(25,11);
  cprintf("6. Delete all the Product");
  gotoxy(25,12);
  cprintf("7. Change Password");
  gotoxy(25,13);
  cprintf("8. Exit");
  textcolor(RED);

  textcolor(RED);
  box(24,15,50,17);
  textcolor(LIGHTBLUE);
  gotoxy(25,16);
  cprintf("Enter Your Choice : ");
  scanf("%d",&choice);

  switch(choice)
  {
     case 1:
     add_product();
     break;


     case 2:
     modify_product();
     break;

     case 3:
     display_product();
     break;

     case 4:
     display_all();

     break;

     case 5:
     delete_product();

     break;

     case 6:
     delete_all();
     break;

     case 7:
     break;

     case 8:
     clrscr();
     textcolor(RED);
     gotoxy(24,12);
     cprintf("Thanks for Using My Mini Project");

     break;

     default:
     clrscr();
     textcolor(RED);
     gotoxy(20,12);
     cprintf("Invalid Choice. Try Again !!!!!!!");
     break;

  }






}

void password()
{
   char pass1[]="sistec",pass2[100],ch;
   int i;
   textcolor(RED);
   box(25,10,50,12);
   textcolor(LIGHTBLUE);
   gotoxy(26,11);
   printf("Enter Password : ");

  ch=getch();

  i=0;
  while(ch!=13)
  {
    printf("*");
    pass2[i]=ch;
    ch=getch();
    i++;
  }
  pass2[i]='\0';

   if(strcmp(pass1,pass2)==0)
   {

     textcolor(RED);
     box(25,10,50,12);
     textcolor(LIGHTBLUE);
     gotoxy(26,11);
     cprintf("Password Accepted");

     clrscr();
     _setcursortype(_NOCURSOR);
     textcolor(RED);
     box(20,10,47,12);
     textcolor(LIGHTBLUE);
     gotoxy(26,11);
     cprintf("Login Successful");
     delay(3000);
     _setcursortype(_NORMALCURSOR);
     clrscr();
     menu();

   }
   else
    {
    clrscr();
     _setcursortype(_NOCURSOR);
     textcolor(RED);
     box(20,10,47,12);
     textbackground(YELLOW);
     textcolor(RED);
     gotoxy(26,11);
     cprintf("Access Denied");
     _setcursortype(_NORMALCURSOR);
     textbackground(0);
    }
}


void add_product()
{
       clrscr();
     FILE *fp;

     gotoxy(5,1);
     cprintf("*************** Add Product **************");

     gotoxy(5,3);
     printf("Enter Product Name : ");
     scanf("%s",&pname);

     gotoxy(5,4);
     printf("Enter Product ID : ");
     scanf("%d",&pid);

     gotoxy(5,5);

     printf("Enter Product Cost : ");
     scanf("%f",&pcost);

     gotoxy(5,6);
     printf("Enter Product Quantity : ");
     scanf("%d",&pqty);


     fp=fopen("product.txt","a");

     fprintf(fp," %s %d %f %d",pname,pid,pcost,pqty);

     fclose(fp);


}


void modify_product()
{
      clrscr();
     int Nqty,ID;
     float Ncost;
     printf("Enter Product ID to be Modified : ");
     scanf("%d",&ID);

     FILE *fp1;

     fp=fopen("product.txt","r");

     fp1=fopen("temp.txt","w");

     while(!feof(fp))
     {
	fscanf(fp,"%s %d %f %d",&pname,&pid,&pcost,&pqty);

	if(pid!=ID)
	{
	    fprintf(fp1," %s %d %f %d",pname,pid,pcost,pqty);
	}
	else
	{
	   printf("Enter New Cost : ");
	   scanf("%f",&Ncost);

	   printf("Enter New Quantity : ");
	   scanf("%d",&Nqty);

	   fprintf(fp1," %s %d %f %d",pname,pid,Ncost,Nqty);

	}
     }

     remove("product.txt");
     rename("temp.txt","product.txt");


     fclose(fp);
     fclose(fp1);


}

void display_product()
{
      clrscr();
     int flag=0;
     printf("Enter ID of Product to be searched : ");
     scanf("%d",&ID); //this id given by user

     fp=fopen("product.txt","r");

     while(!feof(fp))
     {
	 fscanf(fp,"%s %d %f %d",&pname,&pid,&pcost,&pqty);

	 if(pid==ID)
	 {
	   printf("\nProduct Name = %s",pname);
	   printf("\nProduct Cost = %.2f",pcost);
	   printf("\nProduct Quantity = %d",pqty);
	   flag=1;
	   break;
	 }

     }

     if(flag==0)
     printf("Product Not Found");

}

void display_all()
{
      clrscr();
     int y;

     textcolor(LIGHTGREEN);
     gotoxy(5,1);
     cprintf("************ Display All Records ***********");

     fp=fopen("product.txt","r");


     //product Detail Menu
     textcolor(15);
     gotoxy(5,3);
     cprintf("Name");

     gotoxy(25,3);
     cprintf("ID");

     gotoxy(35,3);
     cprintf("Cost");

     gotoxy(45,3);
     cprintf("Quantity");

    y=5;

     while(!feof(fp))
     {
     fscanf(fp,"%s %d %f %d",&pname,&pid,&pcost,&pqty);

     //product Data
     if(pqty<5)
     {

     textcolor(RED+128);
     gotoxy(5,y);
     cprintf("%s",pname);

     gotoxy(25,y);
     cprintf("%d",pid);

     gotoxy(35,y);
     cprintf("%.2f",pcost);

     gotoxy(45,y);
     cprintf("%d",pqty);

     y++;
     }
     else
     {
	  textcolor(14);
     gotoxy(5,y);
     cprintf("%s",pname);

     gotoxy(25,y);
     cprintf("%d",pid);

     gotoxy(35,y);
     cprintf("%.2f",pcost);

     gotoxy(45,y);
     cprintf("%d",pqty);

     y++;


     }

   }

     fclose(fp);





}

void delete_product()
{
      clrscr();

     printf("Enter ID to be deleted : ");
     scanf("%d",&ID);


     fp=fopen("product.txt","r");

     fp1=fopen("temp.txt","w");

     while(!feof(fp))
     {
       fscanf(fp,"%s %d %f %d",&pname,&pid,&pcost,&pqty);

       if(pid!=ID)
       {
	fprintf(fp1," %s %d %f %d",pname,pid,pcost,pqty);
       }
     }

     remove("product.txt");
     rename("temp.txt","product.txt");

     printf("Product Successfully deleted");

     fclose(fp);
     fclose(fp1);



}

void delete_all()
{
	remove("product.txt");
     printf("You have Successfully Deleted all Products");

     fp=fopen("product.txt","w");

     fclose(fp);

}





