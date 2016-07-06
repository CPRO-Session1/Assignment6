/* Matthew Danielson
*  7/6/16
*  banking.c
*  two bank accounts, transacts between them
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct{
	int number;
	int balance;
        char name[25];
} account;


account withdraw(account, int);
account deposit(account, int);
account create(int, int, char []);

int main(){
	srand(time(NULL));
	printf("Welcome to Banking! \n");
	int whiletrue = 1;
	int check;
	char name[25];
	int number;
	int balance;
	account accounts[10];
	int count=0;
	int reference;
	int quantity;
	char throwaway;
	while(whiletrue){
		printf("Enter 1 to make an account, 2 to deposit, 3 to withdraw, 4 to view, and 5 to quit: ");
		scanf("%d", &check);
		scanf("%c", &throwaway);
		if(check == 1){
			number = count;
			printf("\nYour account number is %d",number+1); 
			printf("\nPlease enter your name:");

			fgets(name, sizeof(name), stdin);
			//
			printf("\nPlease enter a balance: ");
			scanf("%d", &balance);
			scanf("%c", &throwaway);
			accounts[count].number = number;
			accounts[count].balance = balance;
			strcpy(accounts[count].name, name);
			count++;
		}
		if(check == 2 || check == 3){
			printf("\nAccount number?");
			scanf("%d", &reference);
			scanf("%c", &throwaway);
			printf("\nAmount?");
			scanf("%d", &quantity);
			scanf("%c", &throwaway);
			reference--;
			if(check == 2)
				accounts[reference] = deposit(accounts[reference], quantity);
			if(check == 3)
				accounts[reference] = withdraw(accounts[reference], quantity);
		}
		if(check == 4){
			printf("\nAccount number?");
			scanf("%d", &reference);
			reference--;
			printf("\nName: %s", accounts[reference].name);
			printf("\nAccount Number: %d", reference+1);
			printf("\nBalance: %d\n", accounts[reference].balance);
		}
		if(check ==5){
			printf("\nThank you for using Banking(TM)\n");
			exit(0);
		}
	}	
	
}

account deposit(account account1, int quantity){
	account1.balance += quantity;
	return account1;
}

account withdraw(account account1, int quantity){
	account1.balance -= quantity;
	return account1;
}

