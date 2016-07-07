//Justin Yu   My code contains errors that I can't troubleshoot //

#include <stdio.h>
#include <string.h>


typedef struct bank {

	char name[100];
	int accountNumber;
	float balance;
} bank;

int deposit (int initial, int cash) {

	initial = initial + cash;
	printf("The new balance is %d\n", initial);
}

int withdraw (int initial, int cash) {

	initial = initial - cash;
	printf("The new balance is %d\n", initial);
}

int main() {
int input;
int amount;

bank peter = {999, "Peter", 96};
bank caleb = {119, "Caleb", 24};

printf("Would you like to deposit or withdraw? 1.deposit  2.withdraw \n");
scanf("%d", &input);	

if(input == 1) {
printf("amount?\n");
scanf("%d", amount);
deposit(amount, peter);}

else if(input == 2) {
printf("amount?\n");
scanf("%d", amount);
withdraw(amount, peter);}

printf("%f", bank.balance);

}





