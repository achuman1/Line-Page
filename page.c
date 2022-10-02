#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void registration();
void login();
void menu();
void contact();
void dashboard();
void about();

char username[10],username1[10],password[10],password1[10],name[10],email[20];
main()
{
	menu();
}
void menu()
{
	int options;
	int i;
	for(i=1;i>0;i++)
	{
	printf("Please choose an option with which you want to proceed\n");
	printf("1. Registration\n2. Login\n3. About\n4. Contact us\n");
	scanf("%d",&options);
	switch(options)
	{
	case 1: registration();
			break;
	case 2: login();
			break;
	case 3: about();
			break;
	case 4: contact();
			break;
	default: printf("WRONG INPUT TRY AGAIN\n");										
	}
	}
}
void registration()
{
	system("cls");
	printf("\t\v Welcome to registration \v\t\n");
	printf("Enter your details below\n");
	printf("Enter your name: ");
	scanf("%s",&name);
	printf("Enter your email address: ");
	scanf("%s",&email);
	printf("Enter your username: ");
	scanf("%s",&username);
	printf("Enter your password: ");
	scanf("%s",&password);
	printf("Thank you for registering\n");
	printf("Enter any key to continue to the menu page\n");
	getch();
	system("cls");
	menu();
}
void login()
{
	printf("\t\v Welcome to Login \v\t\n");
	printf("Enter the username: ");
	scanf("%s",username1);
	printf("Enter your password: ");
	scanf("%s",password1);
	if((username==username1)&&(password==password1))
	{
	printf("Please choose an option\n");
	dashboard();
	}
	else
	{
		printf("Incorrect username or password\n");
	}
	system("cls");
	menu();
}
void contact()
{
	printf("NEED HELP? We are always at your assistance\n");
	printf("Contact us at our email: helpdesk@gmail.com\nor call us at: +91 1234567890");
}
void dashboard()
{
	
}
void about()
{
	
}
