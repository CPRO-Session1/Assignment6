//Bettina Benitez
#include <stdio.h>

typedef struct {
	float real[2];
	float imag[2];
} CompNum;

void plus (float a, float b, float c, float d) {
	float rtotal = a + b;
	float itotal = c + d;
	printf("%.0f + %.0fi\n", rtotal, itotal);
}	

void minus (float a, float b, float c, float d) {
	float rtotal = a - b;
	float itotal = c - d;
	printf("%.0f + %.0fi\n", rtotal, itotal);
}

void times (float a, float b, float c, float d) {
	float f = a * b;
	float o = a * d;
	float i = c * b;
	float l = (c * d) * -1;
	float rtotal = f + l;
	float itotal = o + i;
	printf("%.0f + %0fi\n", rtotal, itotal);
}

void divide (float a, float b, float c, float d) {
	float f = a * b;
	float o = a * (d * -1);
	float i = c * b;
	float l = c * (d * -1);
	float numReal = f + (l * -1);
	float numImag = o * l;
	float denom = (b * b) + (d * d);
	printf("%.2f/%.2f + %.2fi/%.2f", numReal, denom, numImag, denom);
}

int main () {
	char operation;
	CompNum compNum;
	printf("Pick Operand, Real 1, Real 2, Imaginary 1, Imaginary 2: ");
	scanf("%c %f %f %f %f", &operation, &compNum.real[1], &compNum.imag[1], &compNum.real[2], &compNum.imag[2]);
	if (operation == '+') 
		plus (compNum.real[1], compNum.real[2], compNum.imag[1], compNum.imag[2]);
	if (operation == '-')
		minus (compNum.real[1], compNum.real[2], compNum.imag[1], compNum.imag[2]);
	if (operation == '*')
		times (compNum.real[1], compNum.real[2], compNum.imag[1], compNum.imag[2]);
	if (operation == '/')
		divide (compNum.real[1], compNum.real[2], compNum.imag[1], compNum.imag[2]);
	return 0;
}
