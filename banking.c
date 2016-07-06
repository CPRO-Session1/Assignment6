/*Ava N.*/
//This program uses structures to represent a bank account. The accounts have an account number, name, and balance. I created functions to deposit or withdraw money from the balance. Write a driver that creates 2 accounts, adds money to each, then withdraws money from each. Print details of the account between each transaction. 

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
	char name[2];	
	int balance;
	float age;
} account;

int main(){
	account a1, a2;
	strcpy(a1.name, "Business");
	strcpy(a2.name, "Home");
	
	int i;

	a1.balance = 0;
	a2.balance = 0;

//Deposit part:
	printf("How much money do you want to deposit into the %s account? Amount of money in account: %d\n", a1.name, a1.balance);
	scanf("%d", &i);
	a1.balance = a1.balance + i;

	printf("How much money do you want to deposit into the %s account? Amount of money in account: %d\n", a2.name, a2.balance);
	scanf("%d", &i);
	a2.balance = a2.balance + i;


//Withdrawal part:
	printf("How much money do you want to withdraw into the %s account? Amount of money in account: %d\n", a1.name, a1.balance);
	scanf("%d", &i);
	a1.balance = a1.balance - i;

	printf("How much money do you want to withdraw from the %s account? Amount of money in account: %d\n", a2.name, a2.balance);
	scanf("%d", &i);
	a2.balance = a2.balance - i;


	printf("\n");

	printf("Your Receipt: \n");
	printf("You have %d amount of money in your %s account \n", a1.balance, a1.name); 
	printf("You have %d dollars in your %s\t account \n", a2.balance, a2.name); 

	return 0;

}
