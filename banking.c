/*Rumeet Goradia - Banking*/
#include <stdio.h>
#include <string.h>
typedef struct{
	int accNum;
	float bal;
	char name[100];
} bank;

float withdraw(float balance, float withdrawal)
{
	balance -= withdrawal;
	return balance;
}

float deposit(float balance, float depositted)
{
	balance+= depositted;
	return balance;
}

int main()
{
	bank acc1, acc2;
	printf("What are the account numbers for your two bank accounts?\n");
	scanf("%d", &acc1.accNum);
	scanf("%d", &acc2.accNum);
	printf("What is the balance in account %d?\n", acc1.accNum);
	scanf("%f", &acc1.bal);
	printf("what is the balance in account %d?\n", acc2.accNum);
	scanf("%f", &acc2.bal);
	getchar();
	printf("What is the name for account %d?\n", acc1.accNum);
	char name1[100], name2[100];
	fgets(name1, sizeof(name1), stdin);
	strcpy(acc1.name,name1);
	printf("what is the name for account %d?\n", acc2.accNum);
	fgets(name2, sizeof(name2), stdin);
	strcpy(acc2.name,name2);
	printf("\nAccount 1:\n");
	printf("Name: %s", acc1.name);
	printf("Number: %d\n", acc1.accNum);
	printf("Balance: $%.2f\n\n", acc1.bal);
	printf("Account 2:\n");
	printf("Name: %s", acc2.name);
	printf("Number %d\n", acc2.accNum);
	printf("Balance: $%.2f\n\n", acc2.bal);
	float dep1, dep2;
	printf("How much money do you want to deposit into account %d?\n", acc1.accNum);
	scanf("%f", &dep1);
	float depositted1=deposit(acc1.bal, dep1);
	printf("\nAccount 1:\n");
	printf("Name: %s", acc1.name);
	printf("Number: %d\n", acc1.accNum);
	printf("Deposited: $%.2f\n", dep1);
	printf("Balance: $%.2f\n\n", depositted1);
	printf("How much money do you want to deposit into account %d?\n", acc2.accNum);
	scanf("%f", &dep2);
	float depositted2=deposit(acc2.bal, dep2);
	printf("\nAccount 2:\n");
	printf("Name: %s", acc2.name);
	printf("Number: %d\n", acc2.accNum);
	printf("Deposited: $%.2f\n", dep2);
	printf("Balance: $%.2f\n\n", depositted2);
	float with1, with2;
	printf("How much money do you want to withdraw from account %d?\n", acc1.accNum);
	scanf("%f", &with1);
	float withdrawn1=withdraw(depositted1, with1);
	printf("\nAccount 1:\n");
	printf("Name: %s", acc1.name);
	printf("Number: %d\n", acc1.accNum);
	printf("Withdrawn: $%.2f\n", with1);
	printf("Balance: $%.2f\n\n", withdrawn1);
	printf("How much money do you want to withdraw from account %d?\n", acc2.accNum);
	scanf("%f", &with2);
	float withdrawn2=withdraw(depositted2, with2);
	printf("\nAccount 2:\n");
	printf("Name: %s", acc2.name);
	printf("Number: %d\n", acc2.accNum);
	printf("Withdrawn): $%.2f\n", with2);
	printf("Balance: $%.2f\n\n", withdrawn2);
	printf("\nFinal account details:\n");
	printf("Account 1:\n");
	printf("Name: %s", acc1.name);
	printf("Number: %d\n", acc1.accNum);
	printf("Balance: $%.2f\n\n", withdrawn1);
	printf("Account 2:\n");
	printf("Name: %s", acc2.name);
	printf("Number: %d\n", acc2.accNum);
	printf("Balance: $%.2f\n\n", withdrawn2);
	return 0;
}

	
	
