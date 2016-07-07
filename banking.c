#include <stdio.h>

typedef struct BankAccount
{
	char name[100];
	int account;
	float balance;
} bank;

float withdraw(float a)
{
	printf("How much money do you want to withdraw?\n");
	float w;
	scanf("%f", &w);
	printf("Previous balance: %f\nCurrent balance: %f\n", a, a - w);
	return a - w;
}

float deposit(float a)
{
	printf("How much money do you want to deposit?\n");
	float d;
	scanf("%f", &d);
	printf("Previous balance: %f\nCurrent balance: %f\n", a, a + d);
	return a + d;
}

int main()
{
	printf("This is a bank. Time to set up your account.\n");
	bank cust1 = {"Johnny Money", 214365, 60000.00};
	printf("Your name is %s, your account number is %d, and you currently have $%f\n", cust1.name, cust1.account, cust1.balance);
	printf("I would make it so you can have your own money and name but nobody got time for that.\n");
	int cont = 0;
	do {
		printf("Welcome to the bank operations screen, %s. You currently have $%f\n", cust1.name, cust1.balance);
		printf("Withdraw (1), Deposit (2), or exit (0)?\n");
		int user;
		scanf("%d", &user);
		switch (user) {
			case 1:
				cust1.balance = withdraw(cust1.balance);
				break;
			case 2:
				cust1.balance = deposit(cust1.balance);
				break;
			case 0:
				printf("Thanks for coming to the bank, please come again.\n");
				cont++;
		}
	} while (cont == 0);
return 0;
}
