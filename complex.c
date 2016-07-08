/* Harry helped me with this.
*/
#include <stdio.h>

typedef struct complexNum {
	float real;
	float imag;
	}complexNum;
complexNum add ( complexNum Num1,  complexNum Num2) {
	complexNum sum;
	sum.real = Num1.real + Num2.real;
	sum.imag = Num1.imag + Num2.imag;
	return sum;
	}
complexNum multiply (complexNum Num1, complexNum Num2) {
	complexNum product;
	product.real = Num1.real * Num2.real - (Num1.imag * Num2.imag);
	product.imag = Num1.real * Num2.imag + Num1.imag * Num2.real;
	return product;
	}
complexNum subtract (complexNum Num1, complexNum Num2) {
	complexNum result;
	result.real = Num1.real - Num2.real;
        result.imag = Num1.imag - Num2.imag;
        return result;
	}
complexNum divide (complexNum Num1, complexNum Num2) {
	complexNum quotient;
	quotient.real = ((-Num1.imag * Num2.imag) - (Num1.real * Num2.real)) /(-Num2.imag*Num2.imag - Num2.real * Num2.real);
	quotient.imag = (-Num1.imag * Num2.real + Num1.real * Num2.imag) / ( 
-Num2.imag*Num2.imag - Num2.real * Num2.real);
	return quotient;
	}
int main () {
int operation;
complexNum complexNum1, complexNum2;
printf ("Input the first complex number you would like to operate on\n");
scanf ("%fi%f", &(complexNum1.imag), &(complexNum1.real));
printf ("Input the second complex number you would like to operate on\n");
scanf ("%fi%f", &(complexNum2.imag), &(complexNum2.real));
printf ("What operation would you like to perform? 1 (Addition), 2 (Substraction), 3 (Multiplication), or 4 (Division?)\n");
scanf ("%d", &operation);
complexNum complexNum3;
switch (operation){
	case 1: complexNum3 = add(complexNum1, complexNum2);break;
	case 3: complexNum3 = multiply(complexNum1, complexNum2);break;
	case 4: complexNum3 = divide(complexNum1, complexNum2);break;
	case 2: complexNum3 = subtract(complexNum1, complexNum2);break;
}
printf ("%fi%f", complexNum3.imag, complexNum3.real);
}
