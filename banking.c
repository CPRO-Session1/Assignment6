/* Andrew Zihenni
   This code allows you to access your bank.*/
#include <stdio.h>
#include <string.h>
typedef struct account {
	int number;
	char name[50];
	int balance;

}Account;

int deposit (Account account, int amount) {
	account.balance += amount;
	printf ("%s new balance is %d\n", account.name, account.balance);
	return account.balance;
}
int withdraw (Account account, int amount) {
	account.balance -= amount;
	printf ("%s new balance is %d\n",account.name, account.balance);
	return account.balance;	
}
int main () {
Account account1;
Account account2;
account1.balance = 1000;
account2.balance = 5000;
strcpy (account1.name, "John");
strcpy (account2.name, "Bob");
account1.number = 3000;
account2.number = 2000;
printf ("%s your balance is %d\n", account1.name, account1.balance);
printf ("%s your balance is %d\n", account2.name, account2.balance);
account1.balance = deposit (account1, 3);
account2.balance = deposit (account2, 5);
account1.balance = withdraw (account1, 10);
account2.balance = withdraw (account2, 15);
return 0;
}
