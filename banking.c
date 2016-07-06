#include <stdio.h>
#include <string.h>
/*Jack Rosen. The purpose of this is to add and subtract balance from an account using structures and functions. */
typedef struct bankAccounts
{
	float balance;
	int number;
	char name[1000];
} bank;
float deposit(float s)
{
	float money = 50;
	return s + money;
}
float widthdraw(float s)
{
	float money = 25;
	return s - money;
}

int main()
{
	float pers1,pers2;
	printf("How much should be in the first account?\n");
	scanf("%f", &pers1);
	printf("How much should be in the second account?\n");
	scanf("%f", &pers2);
	bank account1 = {pers1, 11245, "Account 1"}, account2 = {pers2, 51124, "Account 2"};
	for (int i = 0; i < 2; i++)
	{
		account1.balance = deposit(account1.balance);
		printf("The account, %s, with number %d now has %f dollars\n", account1.name, account1.number, account1.balance);
		account1.balance = widthdraw(account1.balance);
		printf("The account, %s, with number %d now has %f dollars\n", account1.name, account1.number, account1.balance);
		account2.balance = deposit(account2.balance);
		printf("The account, %s, with number %d now has %f dollars\n", account2.name, account2.number, account2.balance);
		account2.balance = widthdraw(account2.balance);
		printf("The account, %s, with number %d now has %f dollars \n", account2.name, account2.number, account2.balance);
	}
	return 0;
}
