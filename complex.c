/* Yael Kelmer.
 This code uses a structure to create a complex number. The user is prompted to input two complex numbers and choose an operation. Using functions that I created the operations are executed.*/

#include <stdio.h>

typedef struct {
	float realPart;
	float imaginaryPart;
} complexNum;

complexNum add(complexNum c1, complexNum c2) {
	float newRealPart = c1.realPart + c2.realPart;
	float newImagPart = c1.imaginaryPart + c2.imaginaryPart;
	complexNum result = {newRealPart, newImagPart};
	return result;
}

complexNum subtract(complexNum c1, complexNum c2) {
	float newRealPart = c1.realPart - c2.realPart;
	float newImagPart = c1.imaginaryPart - c2.imaginaryPart;
	complexNum result = {newRealPart, newImagPart};
	return result;
}

complexNum multiply (complexNum c1, complexNum c2) {
	float newRealPart = (c1.realPart*c2.realPart) - (c1.imaginaryPart*c2.imaginaryPart);
	float newImagPart = (c1.realPart*c2.imaginaryPart) + (c1.imaginaryPart*c2.realPart);
	complexNum result = {newRealPart, newImagPart};
	return result;
}

complexNum divide (complexNum c1, complexNum c2) {
	float newRealPart = ((c1.realPart*c2.realPart) + (c1.imaginaryPart*c2.imaginaryPart)) / ((c2.realPart*c2.realPart) + (c2.imaginaryPart*c2.imaginaryPart));
	float newImagPart = ((-c1.realPart*c2.imaginaryPart) + (c1.imaginaryPart*c2.realPart)) / ((c2.realPart*c2.realPart) + (c2.imaginaryPart*c2.imaginaryPart));
	complexNum result = {newRealPart, newImagPart};
	return result;
}

void display (complexNum c) {
	printf ("%.1f+%.1fi\n", c.realPart, c.imaginaryPart);
}

int main () {

	float a;
	float b;
	float c;
	float d;

	printf ("Please print the real part of your first complex number.\n");
	scanf ("%f", &a);

	printf ("Please print the imaginary part of your first complex number (do not include the 'i').\n");
	scanf ("%f", &b);

	printf ("Please print the real part of your second complex number.\n");
	scanf ("%f", &c);

	printf ("Please print the imaginary part of your second complex number (do not include the 'i').\n");
	scanf ("%f", &d);

	complexNum c1 = {a, b};
	complexNum c2 = {c, d};

	printf ("This is your first complex number:");
	display(c1);

	printf ("This is your second complex number:");
	display(c2);

	printf ("Please choose and type one of the following operations to apply to the two complex numbers: + , - , * , /\n");
	char operation;
	scanf (" %c", &operation);

	switch (operation)
	{
		case '+': ;
			complexNum sum = add(c1, c2);
			printf ("This is the sum: ");
			display (sum);
			printf ("\n");
			break;
		case '-': ;
			complexNum difference = subtract(c1, c2);
			printf ("This is the difference: ");
			display (difference);
			printf ("\n");
			break;
		case '*': ;
			complexNum product = multiply(c1, c2);
			printf ("This is the product: ");
			display (product);
			printf ("\n");
			break;
		case '/': ;
			complexNum quotient = divide(c1, c2);
			printf ("This is the quotient: ");
			display (quotient);
			printf ("\n");
			break;
	}
}


