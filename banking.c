#include <stdio.h>

typedef struct{
	int accNum;
	char name[100];
	float balance;
}account;

int deposit(int init, int cash){
	init += cash;

	return init;
	}

int withdraw(int init, int cash) {
	init -= cash;

	return init;
	}

int main() {

int input, remove, choice, accnum;

account A2213={2213, "Alex", 500};
account A2214={2214, "Caleb", 0.01};

	printf("Please enter your account number:\n");
	scanf("%d", &accnum);
	
	if(accnum == 2213){

	printf("Welcome! Would you like to perform a deposit(1) or a withdrawal(2)?(Press any other number to exit.)\n");
        scanf("%d", &choice);

	
	if(choice == 1){
		printf("Enter deposit amount:\n");
		scanf("%d", &input);
		printf("The new balance of account A2213 is %d\n",deposit(A2213.balance,input));
		}

	else if(choice == 2){

		printf("Enter withdrawal amount:\n");
		scanf("%d", &remove);
		printf("The new balance of account A2213 is %d\n",withdraw(A2213.balance,remove));
		}

	}

	else if(accnum == 2214){

	printf("Welcome! Would you like to perform a withdrawal(1) or a deposit(2)?\nPress any other number to exit.\n");
        scanf("%d", &choice);


        if(choice == 1){
                printf("Enter deposit amount:\n");
                scanf("%d", &input);
                printf("The new balance of account A2214 is %d\n",deposit(A2214.balance,input));
        	}

        else if(choice == 2){

                printf("Enter withdrawal amount:\n");
                scanf("%d", &remove);
                printf("The new balance of account A2213 is %d\n",withdraw(A2214.balance,remove));
                }
	else { 
	}
}

}
