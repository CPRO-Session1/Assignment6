#include <stdio.h>
#include <string.h>

typedef struct bankAccount{
	char name;
	float balance;
	int accountNumber;
}Account;

float money(float x){
	float balance;
	printf("Please type in the amount of money you want to change:\n");
	scanf("%f",&x);
	balance=balance+x;
	return balance;
}

int main(){
	Account ac1;

	strcpy(ac1.name,"Marry");
	ac1.balance=5000;
	ac1.accountNumber=123;

	float x;

	money(x);
	printf("The change in your account is \"%f\", your balance is \"%f\"\n",x,ac1.balance);

	Account ac2;

	strcpy(ac2.name,"Maria");
	ac2.balance=10000;
	ac2.accountNumber=456;
	
	money(x);
	printf("The change in your account is \"%f\", your balance is \"%f\"    \n",x,ac2.balance);	
	
	return 0;
}
