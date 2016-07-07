// Julia Tan
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	int acctNum[3]; // Account number
	char acctName[3][100]; // Account name
	float balance[3]; // Account balance
} Account;

void info(Account a, int client){ // prints current account info of client
	printf("Account Name: %s\n", a.acctName[client]);
	printf("Account number: %d\n", a.acctNum[client]);
	printf("Current balance: USD %.2f\n\n", a.balance[client]);
}

void deposit(Account a, int client, float num){ // client = which account, num = money to deposit
	printf("\nUSD %.2f added to account.\n\n", num);
	printf("Previous balance: USD %.2f\n\n", a.balance[client]);
	a.balance[client] += num; // adds number input to total balance
	info(a, client); // print account info
}

void withdraw(Account a, int client, float num){ // cleint = which account, num = money to withdraw
	if (a.balance[client]-num < 0){ // If 
		printf("\nError: insufficient funds to do this.\n\n");
	}else {
		printf("\nUSD%.2f withdrawn from account.\n", num);
		printf("Previous balance: %.2f\n\n", a.balance[client]);
	}
	a.balance[client] -=  num; // subtract from balance
	info(a, client); // print account info
}

int main(){
	Account acc;
	int num; // selects account
	int wd; // withdraw or deposit
	float sum; // amount of money to withdraw/deposit
	int inUse = 1; // if making a transaction, equal to 1

	strcpy(acc.acctName[1], "Noel Park");
	strcpy(acc.acctName[2], "Sabrina Martinez");
	srand(time(0));
	for (int x = 1; x != 3; x ++){ // generates random acct number and acct balance
		acc.acctNum[x] = (rand()%1000000);
		acc.balance[x] = (rand()%1000000);
	}

	info(acc, 1);
	info(acc, 2);

	while (inUse){
		printf("\nWhich account would you like to manage? (1)Noel Park (2)Sabrina Martinez\n");
		scanf("%d", &num);
		printf("Would you like to (1)Withdraw or (2)Deposit?\n");
		scanf("%d", &wd);
	
		if (wd == 1){
			printf("How much would you like to withdraw?\n");
			scanf("%f", &sum);
			withdraw(acc, num, sum);
		}else if (wd == 2){
			printf("How much would you like to deposit?\n");
			scanf("%f", &sum);
			deposit(acc, num, sum);
		}
		printf("\nWould you like to make another transaction? (1)Yes (0)No\n");
		scanf("%d", &inUse);
	}
	return 0;
}
