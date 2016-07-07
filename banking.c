//Bettina Benitez
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	int accountNumber[2];
	char name[3][100];
	float balance[2];
} account;

float getDeposit (account x, int chAccount) {
	printf("How much are you going to deposit into your account?: ");
	float dep; //userinput for deposit
	scanf("%f", &dep);
	x.balance[chAccount] = x.balance[chAccount] + dep; //adds deposit
	printf("\nName: %s\n Account Number: %d\n Balance: %.2f\n\n", x.name[chAccount], x.accountNumber[chAccount], x.balance[chAccount]);
	return 0;
}

float getWithdraw (account x, int chAccount) {
	printf("How much are you going to withdraw from your account?: ");
	float wit; //userinput for withdraw
	scanf("%f", &wit);
	x.balance[chAccount] = x.balance[chAccount] - wit; //adds withdraw
	printf("\nName: %s\n Account Number: %d\n Balance: %.2f\n\n", x.name[chAccount], x.accountNumber[chAccount], x.balance[chAccount]);
	return 0;
}

int main () {
	account x;
	strcpy(x.name[1], "Tyra");
	strcpy(x.name[2], "Ally");
	srand(time(0));
	int i;
	for (i = 1; i < 3; i++) {
		x.accountNumber[i] = rand()%10001 + 9000; //gets random card number specific to a person
		x.balance[i] = rand()%100001; // gets random balance 
		printf("Name: %s\n Account Number: %d\n Balance: %.2f\n\n", x.name[i], x.accountNumber[i], x.balance[i]);
	}
	int check = 1;
	while (check != 0) {
		printf("\nChoose account Tyra (1) / Ally (2): ");
		int chAccount; //chosen Account
		scanf("%d", &chAccount);
		printf("Deposit (0) or Withdraw (1): ");
		int chOption; //chosen Option
		scanf("%d", &chOption);
		float deposit, withdraw;
		if (chOption == 0)
			deposit = getDeposit(x, chAccount);
		if (chOption == 1)
			withdraw = getWithdraw(x, chAccount);
		printf("Start a new transaction? (1) yes (0) no:  ");
		scanf("%d", &check);
	}
	return 0;
}
