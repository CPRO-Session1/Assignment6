//Clarke Littlejohn
//Banking program i used code from another banking program i wrote so is probably is not as clean as it should be.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
	int ID;
	float balance;
	char fName[100];
	char lName[100];
}bankAcc;
float deposit(bankAcc);
float withdraw(bankAcc);
void updateInfo(bankAcc);
char menu();

int main(){

	srand(time(0));
	bankAcc user[2];
	user[0].ID=rand();
	user[0].balance=10000;
	strcpy(user[0].fName,"john");
	strcpy(user[0].lName,"doe");
	updateInfo(user[0]);	


char x;
	do{
		x=menu();
	 if(x=='D'){
		user[0].balance=deposit(user[0]);
		updateInfo(user[0]);
		x=menu();
	     } else if(x=='W'){
		user[0].balance=withdraw(user[0]);
		updateInfo(user[0]);
		x=menu();
	     } else if(x=='Q'){
	     	updateInfo(user[0]);
			printf("\nEnding Program...\n");
	     }
	 else
		 x=menu();
	}while(x!='Q');





	user[1].ID=rand();
	user[1].balance=23234;
	strcpy(user[1].fName,"jane");
	strcpy(user[1].lName,"doe");
	updateInfo(user[1]);	

	do{
		x=menu();
	 if(x=='D'){
		user[1].balance=deposit(user[1]);
		updateInfo(user[1]);
		x=menu();
	     } else if(x=='W'){
		user[1].balance=withdraw(user[1]);
		updateInfo(user[1]);
		x=menu();
	     } else if(x=='Q'){
	     	updateInfo(user[1]);
			printf("\nEnding Program...\n");
	     }
	 else
		 x=menu();
	}while(x!='Q');
	return 0;
}
char menu(){
	char input[3];
	int i=1;
	//get the type of transaction was going to add more things to the menu
	do
	{
		printf("\nWhat transaction would you like to do?\n(D)Deposit, (W)Withdraw, or (Q)Quit: ");
		
		fgets(input,sizeof(input),stdin);
		input[strlen(input)-1]='\0';
		if(input[0]=='D' || input[0]=='W' || input[0]=='Q'){
				i=0;
				
		}
	}while(i);
return input[0];
}

float deposit(bankAcc user){	
	
	float money;
	char userError[100];

	//deposits money
	printf("\nEnter the amount of money you want to add to your account: ");
	scanf("%f",&money);
	fgets(userError,sizeof(userError),stdin);
	userError[strlen(userError)-1]='\0';
	return user.balance+money;
}
float withdraw(bankAcc user){
	
	float money;
	char userError[100];
	
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














