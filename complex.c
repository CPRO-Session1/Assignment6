// Julia Tan
// complex.c

#include <stdio.h>

typedef struct{
	float real[2];
	float imag[2];
}Cnum;

void add(float a1, float b1, float a2, float b2){
	float real = a1 + a2;
	float imag = b1 + b2;
	printf("Answer: %.0f+%.0fi\n", real, imag);
}

void sub(float a1, float b1, float a2, float b2){
	float real = a1 - a2;
	float imag = b1 - b2;
	printf("Answer: %.0f+%.0fi\n", real, imag);
}

void div(float a1, float b1, float a2, float b2){
	float numeratorreal;
	float numeratorimag;
	float denominator;
	float real;
	float imag;
	numeratorreal = (a1*a2) + (b1*b2);
	numeratorimag = (-1*a1*b2) + (b1*a2);
	denominator = (a2*a2) + (b2*b2);
	printf("%.2f", numeratorreal);
	real = numeratorreal/denominator;
	imag = numeratorimag/denominator;
	printf("Answer: %.2f+%.2fi\n", real, imag);
}

void mult(float a1, float b1, float a2, float b2, int print){
	float f;
	float o;
	float i;
	float l;
	float real;
	float imag;
	f = a1*a2; // real
	o = a1*b2; // complex
	i = b1*a2; // complex
	l = -1*b1*b2; // real
	real = f + l;
	imag = o + i;
	if (print)
		printf("Answer: %.0f+%.0fi\n", real, imag);
}

int main(){
	Cnum cnum;
	char op;
	printf("Enter your calculation.\nFormat: real1 imaginary1 operation real2 imaginary2\nTo write operations, type +,-,* or /.\n");
	scanf("%f %f %c %f %f", &cnum.real[1], &cnum.imag[1], &op, &cnum.real[2], &cnum.imag[2]);
	if (op == '+'){
		add(cnum.real[1], cnum.imag[1], cnum.real[2], cnum.imag[2]);
	}else if (op == '-'){
		sub(cnum.real[1], cnum.imag[1], cnum.real[2], cnum.imag[2]);
	}else if (op == '/'){
		div(cnum.real[1], cnum.imag[1], cnum.real[2], cnum.imag[2]);
	}else if (op == '*'){
		mult(cnum.real[1], cnum.imag[1], cnum.real[2], cnum.imag[2], 1);
	}else{
		printf("Error");
	}
	return 0;
}
