//Anya Lauria
//Banking 
//IMPORTANT: When you run this code, note that account no. 12345 is for Elrond, and account no. 54321 is for Arwen 
#include <stdio.h> 
#include <string.h> 
 

typedef struct{ 
	int accnum; 
	char name[100]; 
	double balance;  
} bankacc; 

double bankbalance(char z, float t, bankacc b){ 

	double balance = b.balance;

        if(z == 'w'){ 
	  balance = balance - t;
	  return balance; 
	}
	else {
		balance = balance + t; 
		return balance; 
	}
	 	

} 

int main() {

char q = 'y'; 
char y; 

bankacc p1, p2; 

p1.accnum = 12345; 
p2.accnum = 54321; 

strcpy(p1.name, "Elrond"); 
strcpy(p2.name, "Arwen");

p1.balance = 100; 
p2.balance = 100; 


printf("Your bank balance is currently 100\n");

do{
        char z; 
	float t; 
        int rr;
        
	printf("Enter your account number for access please\n");
        scanf("%d", &rr);

        if(rr == 12345){
		printf("\nWelcome, Elrond\n");
	}
	else if(rr == 54321){
		printf("\nWelcome, Arwen\n");
	}
	else{
		printf("\nThe entered account number does not exist\n");
		continue;  
	}

        printf("\nWould you like to withdraw from your account or add to it?\n");
	printf("For withdrawal: 'w'  \t   For addition: 'a'\n");

        scanf(" %c", &z); 
        
	if(z == 'w')
		printf("\nHow much money would you like to withdraw?\n"); 
	else{
		printf("\nHow much money would you like to add?\n"); 
	}

	scanf("%f", &t);

	if(rr == 12345){

                p1.balance = bankbalance(z, t, p1);
                printf("\nYour current account balance is %f\n", p1.balance); 
	}

	else if(rr == 54321){
		p2.balance = bankbalance(z, t, p2);
		printf("\nYour current account balance is %f\n", p2.balance);
	}

	printf("\nWould you like to perform another transaction?\n"); 
        printf("If yes: 'y'  \t If no: 'n'\n"); 
	
	scanf(" %c", &q);
	printf("%d\n", q); 

}while (q == 'y'); 


}


