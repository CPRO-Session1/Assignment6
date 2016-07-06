#include <stdio.h>

typedef struct {
	int acct_num;
	char name[100];
	float balance;
} bank_acct;

void print_details (bank_acct acct)
{
	printf("BANK ACCOUNT %d OWNED BY %s HAS $%.2f.\n", acct.acct_num, acct.name, acct.balance);
}

float withdraw (bank_acct acct)
{
	printf("Withdraw how much from account 2? ");
	float amt;
	scanf("%f", &amt);
	acct.balance -= amt;
	print_details(acct);
	return acct.balance;
}

float deposit (bank_acct acct)
{
	printf("Deposit how much into account 1? ");
	float amt;
	scanf("%f", &amt);
	acct.balance += amt;
	print_details(acct);
	return acct.balance;
}


int main()
{
	bank_acct account1 = {1, "Dave", 100.00};
	bank_acct account2 = {2, "Mitchell", 322.23};

	print_details(account1);
	print_details(account2);

	account1.balance = deposit(account1);
	account2.balance = deposit(account2);
	
	account1.balance = withdraw(account1);
	account2.balance = withdraw(account2);


	return 0;
}
