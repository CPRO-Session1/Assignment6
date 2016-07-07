/*Sean Kee*/
/*Banking using structures v1.0.12*/
#include <stdio.h>
#include <string.h>
int a = 0; //Global Account Counter

typedef struct bankAccount{
	int number;
	char name[100];
	float balance;
} account;

void title() {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n^-------------^\n");
		printf("T KEE BANKING T\n");
		printf("I_@**_***_**@_I\n\n\n\n");
}

void accountStatus(account acc) {
	title();
	printf("ACCOUNT STATUS\n");
	printf("**************\n\n");
	printf("Name: %s\n", acc.name);
	printf("Account Number: %1d\n", acc.number);
	printf("Current Balance: $%.02f\n", acc.balance);
	printf("\n\nPress Enter to Return.");
	getchar();
}

account accountCreate(account acc) {
	printf("ACCOUNT CREATION\n");
	printf("****************\n\n");
	printf("What is your name?\n#: ");	
	getchar();
	fgets(acc.name, sizeof(acc.name), stdin);
	acc.number = a;
	acc.balance = 0;
	accountStatus(acc);
	return acc;
}

account withdraw(account acc) {
	float amount;
	char retry;
	char status;
	title();
	printf("WITHDRAW FUNDS\n");
	printf("**************\n\n");
	printf("Your current balance is: $%.02f\n\n", acc.balance);
	printf("How much would you like to withdraw?\n#: ");
	scanf("%f", &amount);
	if (amount > acc.balance) {
		printf("\nSorry, you do not have enough funds to withdraw $%0.2f\n", amount);
		printf("\nRetry? [y/n]\n#: ");
		getchar();
		scanf("%c", &retry);
		if (retry == 'y' || retry == 'Y')
			withdraw(acc);
		else
			return acc;
	}
	else {
		acc.balance -= amount;
		printf("You have successfully withdrawn $%.02f from your account.\n\n", amount);
		printf("Would you like to check your new status? [y/n]\n#: ");
		getchar();
		scanf("%c", &status);
		getchar();
		if (status == 'y' || status == 'Y') {
			accountStatus(acc);
			return acc;
		}
		else
			return acc;
	}
}

account deposit(account acc) {
	float amount;
	char status;
	title();
	printf("DEPOSIT FUNDS\n");
	printf("*************\n\n");
	printf("Your current balance is: $%.02f\n\n", acc.balance);
	printf("How much would you like to deposit?\n#: ");
	scanf("%f", &amount);
	acc.balance += amount;
	printf("You have successfully deposited $%.02f to your account.\n\n", amount);
	printf("Would you like to check your new status? [y/n]\n#: ");
	getchar();
	scanf("%c", &status);
	getchar();
	if (status == 'y' || status == 'Y') {
		accountStatus(acc);
		return acc;
	}
	else
		return acc;
}

void mainMenu(account acc[]) {
	int menu = 1; //1:MAIN, 2:CREATE, 3:MANAGE
	int option;
	int account = -1;
	do {
		title();
		switch(menu){
			case 1:
				printf("How may I help you today?\n\n1: Create A New Account\n2: Manage An Existing Account\n3: Exit\n\n#: ");
				scanf("%d", &option);
				switch(option) {
					case 1: //Create
						menu = 2;
						break;
					case 2: //Manage
						menu = 3;
						break;
					case 3: //Exit
						menu = 0;
						break;
					default: menu = 1;
				}
				break;
			case 2:
				acc[a] = accountCreate(acc[a]);
				a++;
				menu = 1;
				break;
			case 3:
				if (account == -1) {
					printf("Please enter your account number\n#: ");
					scanf("%d", &account);
					break;
					}
				else {
					printf("Hello %s", acc[account].name);
					printf("What action would you like to perform?\n\n1: Witdraw\n2: Deposit\n3: Check Balance\n4: Return\n#: ");
					scanf("%d", &option);
					getchar();	
					switch(option) {
						case 1: //Withdraw
							acc[account] = withdraw(acc[account]);
							break;
						case 2: //Deposit
							acc[account] = deposit(acc[account]);
							break;
						case 3: //Status Check
							printf("Your current balance is: $%.02f", acc[account].balance);
							printf("\nPress Enter to Return.");
							getchar();
							break;
						case 4:
							menu = 1;
							account = -1;
							break;
					}
					break;
				}

		}

	} while (menu > 0);
}

void initialize() {
	int n;
	printf("Input number of total accounts #: ");
	scanf("%d", &n);
	account acc[n];

	mainMenu(acc);
}

int main()
{
	initialize();

	return 0;
}
