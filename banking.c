/* banking code
   @author Aly Milich
   */

#include <stdio.h>

typedef struct bank{

	int accNum;
	char name[100];
	float balance;

} bank;


float withdraw(float a){

	float newBal;
	newBal = 1000-a;
	printf("Your new balance is: %f", newBal);
}

float deposit(float a, bank b){

	float nuevoBal;
	b.balance = b.balance + a;

	printf("Your new balance is: %f", b.balance);
}



int main(){
	char name[100];
	printf("What is your name?\n");
	fgets("%s", &name);

	printf("Do you want to deposit(press 1) or withdraw(press 2)\n");
	bank bank1 = {1, name, 1000};
	bank bank2 = {2, name, 800};
	printf("#: %d, Name: %s, Balance: %f\n",bank1.accNum,bank1.name,bank1.balance);
	int input;
	scanf("%d", &input);

	if(input == 1){
		float depo;

		printf("How much are you depositing?");
		scanf("%f", &depo);

		deposit(depo, bank1);
	}

	else if(input ==2){
		float withd;

		printf("How much are you withdrawing?");
		scanf("%f", &withd);

		withdraw(withd);
	
	}

}
