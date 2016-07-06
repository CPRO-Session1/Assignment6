//Emma Ladouceur
//Assignment 6 banking.c
//This compiles, but I'm still having some trouble with the values I put in for the balance... can't figure that out. 

#include <stdio.h>

typedef struct bank {

	int accNum;
	char name[100];
	float balance;

} bank;


float withdraw(bank b, float a){

	float newbalance;
	b.balance= b.balance-a;
	printf("Your new balance is %f", b.balance); 
}

float deposit(float a, bank b){
	
	float newbalance;
	b.balance= b.balance + a;
	printf("Your new balance is %f", b.balance);


}

int main(){
	char name;	
	printf("What is your name");
	scanf("%s", &name);
	printf("Would you like to deposit(type 1) or withdraw (type 2)\n");
	bank bank1 = {1, name, 600.0};
	bank bank2 = {2, name, 500.0};

	int response;
	scanf("%d", &response);
	if(response == 1){
		float depo;
		
		printf("How much are you depositing");
		scanf("%f", &depo);
		deposit(depo, bank1);

	}

	if(response ==2){
		float with;

		printf("How much are you withdraw");
		scanf("%f",&with);
		withdraw(bank1,with);

	}
	
	printf("%f",bank1.balance);
}
