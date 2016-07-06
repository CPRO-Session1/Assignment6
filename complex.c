/* Matthew Danielson
*  7/6/16
*  complex.c
*  Complex number calculator using structures with a user
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int coefficient;
	int c;
} imag;

imag add(imag, imag);
imag sub(imag, imag);
imag mul(imag, imag);
imag divi(imag, imag);

int main(){
	printf("Welcome to the Complex Number Calculator!");
	int input;
	char throwaway;
	int coefficient;
	int c;
	imag expressions[3];
	int count;
	while(1){
		count = 0;
		printf("\nEnter 1 to add, 2 to subtract, 3 to multiply, 4 to divide, and 5 to exit");
		scanf("%d", &input); 
		scanf("%c", &throwaway);
		if(input != 5){
			while(count <2){
				printf("\nPlease the coefficient: ");
				scanf("%d", &coefficient);
	        		scanf("%c", &throwaway);
				printf("\nPlease enter the extra term: ");
				scanf("%d", &c);
	        		scanf("%c", &throwaway);
				expressions[count].coefficient = coefficient;
				expressions[count].c = c;
				count++;
		
			}
		}
		if(input == 1){
			expressions[2] = add(expressions[0], expressions[1]);
			printf("\nResult: %di + %d", expressions[2].coefficient,expressions[2].c);

		}
		if(input == 2){
	 		expressions[2] = sub(expressions[0], expressions[1]);
			printf("\nResult: %di + %d", expressions[2].coefficient, expressions[2].c);

		}
		if(input == 3){
                        expressions[2] = mul(expressions[0], expressions[1]);
		        printf("\nResult: %di + %d", expressions[2].coefficient,expressions[2].c);

		}
		if(input == 4){
                        expressions[2] = add(expressions[0], expressions[1]);
			printf("\nResult: %di + %d", expressions[2].coefficient, expressions[2].c);

		}
		if(input == 5){
			printf("\nThank you for using the calculator\n");
			exit(0);
		}
	}
}

imag add(imag expression1, imag expression2){
	imag expression3;
	expression3.coefficient = (expression1.coefficient + expression2.coefficient);
	expression3.c = (expression1.c + expression2.c);

	return expression3;
}

imag sub(imag expression1, imag expression2){
	imag expression3;
	expression3.coefficient = (expression1.coefficient - expression2.coefficient);
	expression3.c =(expression1.c - expression2.c);
	return expression3;
}

imag mul(imag expression1, imag expression2){
	imag expression3;
	expression3.c = ((expression1.c * expression2.c) -(expression1.coefficient * expression2.coefficient));
	expression3.coefficient = ((expression1.coefficient * expression2.c   ) + (expression2.coefficient * expression1.c));
	return expression3;
}

imag divi(imag expression1, imag expression2){
	imag expression3;
	imag temp;
	temp.coefficient = expression2.coefficient;
	temp.c = -(expression2.c);
	imag temp2 = mul(expression1, temp);
	imag temp3 = mul(expression2, temp);
	expression3.coefficient = (temp2.coefficient / temp3.coefficient);
	expression3.c =  (temp2.c / temp3.c);
	return expression3;
}

