#include <stdio.h>
#include <string.h>

typedef struct{
	int accountNum;
	char name[100];
	int balance;
}account;

int deposit(int initial,int cash){
	initial = initial + cash;
	return initial;
	}
int withdraw(int initial,int cash){
	initial = initial - cash;
 	return initial;       
}
int main(){
	int input;
	int remove;
	int choice;
	int bankAccount;
	account A1={2213,"Alex", 500};
        account A2={2214,"Caleb",600};
	printf("choose the account to draw from, 2213 or 2214\n");
	scanf("%d",&bankAccount);
	if (bankAccount==2213){
	printf("choose whether to deposit(1) or withdraw(2)\n");
	scanf("%d",&choice);
	if (choice==1){
	printf("Enter the money to deposit into the accounts: \n");
	scanf("%d",&input);
	printf("The account number is: \n");
	printf("%d\n",A1.accountNum);
	printf("the account name is Alex: \n");
	printf("The new total is: \n");
	printf("%d\n",deposit(A1.balance,input));}
	else if (choice==2)
	{printf("Enter the money you want to withdraw: \n");
	scanf("%d",&remove);
        printf("The account number is: \n");
        printf("%d\n",A1.accountNum);
        printf("the account name is Alex: \n");
	printf("The new total is: \n");
	printf("%d\n",withdraw(A1.balance,remove));
	}
	}
	else if (bankAccount==2214)
	{
        printf("choose whether to deposit(1) or withdraw(2)\n");
        scanf("%d",&choice);
        if (choice==1){
        printf("Enter the money to deposit into the accounts: \n");
        scanf("%d",&input);
        printf("The account number is: \n");
        printf("%d\n",A2.accountNum);
        printf("the account name is Caleb: \n");
        printf("The new total is: \n");
	printf("%d\n",deposit(A2.balance,input));}
        else if (choice==2)
        {printf("Enter the money you want to withdraw: \n");
        scanf("%d",&remove);
        printf("The account number is: \n");
        printf("%d\n",A2.accountNum);
        printf("the account name is Caleb: \n");
	printf("The new total is: \n");
        printf("%d\n",withdraw(A2.balance,remove));
	}
	}
	return 0;
	}
