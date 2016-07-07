/* Yael Kelmer.
 This code creates accounts and uses two functions to deposit and withdraw money.*/

#include <stdio.h>

typedef struct {
	int accountNumber;
	char accountName[100];
	float accountBalance;
} bank;


bank deposit (bank b, float moneyToDeposit) {
	b.accountBalance += moneyToDeposit;
	return b;
}

bank withdraw (bank b, float moneyToWithdraw) {
	b.accountBalance -= moneyToWithdraw;
	return b;
}

int main () {
	
	bank b1 = {3876, "checkings account", 1000};
	bank b2 = {9845, "savings account", 9000};
	
	b1 = deposit(b1, 100);
	printf ("After your deposit, this is the new account balance for account %d: %f\n", b1.accountNumber, b1.accountBalance);
	b1 = withdraw(b1, 400);
	printf ("After your withdrawl, this is the new account balance for account %d: %f\n", b1.accountNumber, b1.accountBalance);

	b2 = deposit(b2, 5000);
	printf ("After your deposit, this is the new account balance for account %d: %f\n", b2.accountNumber, b2.accountBalance);
	b2 = withdraw(b2, 690);
	printf ("After your withdrawl, this is the new account balance for account %d: %f\n", b2.accountNumber, b2.accountBalance);
}
