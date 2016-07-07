//Clarke Littlejohn
//Banking program
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
	int ID;
	float balance;
	char fName[100];
	char lName[100];
	char password[100];
}bankAcc;
void accountSetup(char);
float deposit(char[],bankAcc);
float withdraw(char[],bankAcc);
void updateInfo(bankAcc);
void menu();

int main(){
		accountSetup('i');
	return 0;
}
void accountSetup(char dw){
	
	srand(time(0));
	int temp=0;
	char input[3], input1[100];
	static bankAcc user;
	
	//i couldn't think of any other way to make sure the values were being passed correctly since the user is declared here
	if(dw=='D'||dw=='W'||dw=='Q')
		goto DWQ;

	//gets user input to see if the person wants to set up an account
	printf("Bank\n");
	do{
		printf("Do you want to set up an account? [Y/N] ");
		if(temp>0)
			printf("\nEnter Y for yes N for no. ");
		fgets(input,sizeof(input),stdin);
		input[strlen(input)-1]='\0';
		if(strcmp(input,"Y")==0){
			break;
		}
		else {
			if(strcmp(input,"N")==0){
			printf("Ending program...\n");
			return;
			}
		}
		temp++;
	}while(1);

	//these 3 blocks of code get the name and password of the account.
	//could have done this in a 2D array but i was too lazy to look up how to print 2d arrays.
	printf("\nEnter your first name: ");
	fgets(input1,sizeof(input1),stdin);
	input1[strlen(input1)-1]='\0';
	strcpy(user.fName,input1);

	printf("\nEnter your last name: ");
	fgets(input1,sizeof(input1),stdin);
	input1[strlen(input1)-1]='\0';
	strcpy(user.lName,input1);

	printf("\nEnter your Password: ");
	fgets(input1,sizeof(input1),stdin);
	input1[strlen(input1)-1]='\0';
	strcpy(user.password,input1);
	
	//confirmation on password.
	int tracker=0;
	do{
		if(tracker==0)
			printf("\nConfirm your Password: ");
		else
			printf("Password does not match. Confirm your Password: ");
		fgets(input1,sizeof(input1),stdin);
		input1[strlen(input1)-1]='\0';
		if(strcmp(user.password,input1)==0)
			break;
		tracker++;
	}while(1);
	
	user.ID=rand();
	printf("Your ID number is: %d",user.ID);
	menu();

	//skips over the code aboce as that only needs to be done once
DWQ: if(dw=='D'){
		printf("\nEnter your Password: ");
		fgets(input1,sizeof(input1),stdin);
		input1[strlen(input1)-1]='\0';
		user.balance=deposit(input1,user);
		updateInfo(user);
		menu();
     } else if(dw=='W'){
		printf("\nEnter your Password: ");
		fgets(input1,sizeof(input1),stdin);
		input1[strlen(input1)-1]='\0';
		user.balance=withdraw(input1,user);
		updateInfo(user);
		menu();
     } else if(dw=='Q'){
	     	updateInfo(user);
		printf("\nEnding Program...\n");
     }
     
}	


void menu(){
	char input[3];
	int i=1;
	//get the type of transaction was going to add more things to the menu
	do
	{
		printf("\nWhat transaction would you like to do?\n(D)Deposit, (W)Withdraw, or (Q)Quit: ");
		
		fgets(input,sizeof(input),stdin);
		input[strlen(input)-1]='\0';
		if(input[0]=='D' || input[0]=='W' || input[0]=='Q'){
				accountSetup(input[0]);
				i=0;
				
		}
	}while(i);
}

float deposit(char password[], bankAcc user){
	
	//makes sure the password is correct before entering it, there should be some type of lock or cooldown period but can think of a way to
	//code that.
	char userError [100];
	float money=0;
	if(strcmp(user.password,password)!=0){
		while(strcmp(user.password,userError)!=0){
			printf("\nInvaild password. Reenter your password: ");
			fgets(userError,sizeof(userError),stdin);
			userError[strlen(userError)-1]='\0';
		}
	}
	
	//deposits money
	printf("\nEnter the amount of money you want to add to your account: ");
	scanf("%f",&money);
	fgets(userError,sizeof(userError),stdin);
	userError[strlen(userError)-1]='\0';
	return user.balance+money;
}

float withdraw(char password[], bankAcc user){
	
	//makes sure the password is correct before entering it, there should be some type of lock or cooldown period but can think of a way to
	//code that.
	char userError [100];
	float money=0;
	if(strcmp(user.password,password)!=0){
		while(strcmp(user.password,userError)!=0){
			printf("\nInvaild password. Reenter your password: ");
			fgets(userError,sizeof(userError),stdin);
			userError[strlen(userError)-1]='\0';
		}
	}
	
	//withdraws money
	printf("\nEnter the amount of money you want to take out of your account: ");
	scanf("%f",&money);
	fgets(userError,sizeof(userError),stdin);
	userError[strlen(userError)-1]='\0';
	return user.balance-money;
}

void updateInfo(bankAcc user){
printf("\nName: %s %s\nID Number: %d\nBalance: $%.2f",user.fName,user.lName,user.ID,user.balance);
}














