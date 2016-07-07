/* Harry Brickner
   Does basic banking operations */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Account{
	int id;
	char name[10];
	int balance;
}Account;

/* Withdraws money from an account into the real world. Keep in mind, the units are 1/100 of a dollar. */
void withdraw(Account *from, int amount){
	from->balance -= amount;
}
/* Deposits money from the real world into the account. Keep in mind, the units are 1/100 of a dollar. */
void deposit(Account *to, int amount){
	to->balance += amount;
}
/* Prints account info */
void printAccount(Account from){
	/* Localization? Who needs it? Also, balance is an int to avoid floating point errors.*/
	printf("User %d: %s\nBalance: $%01d.%02d\n", from.id, from.name, from.balance / 100, (from.balance * (from.balance < 0? -1 : 1)) % 100);
}

void driver(){
	srand(time(0));
	Account acc0 = {rand(), "Alice\0", 0};
	Account acc1 = {rand(), "Bob\0", 0};
	printAccount(acc0);
	printAccount(acc1);
	printf("Deposit\n");
	deposit(&acc0, rand() % 100000);
	deposit(&acc1, rand() % 100000);
	printAccount(acc0);
	printAccount(acc1);
	printf("Withdraw\n");
	withdraw(&acc0, rand() % 100000);
	withdraw(&acc1, rand() % 100000);
	printAccount(acc0);
	printAccount(acc1);
}

int main(){
	driver();
	return 0;
}
