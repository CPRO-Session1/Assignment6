#include <stdio.h>
#include <complex.h>

typedef struct complexNumber(float x, float y){
	double z = x+y*I;
	return complex;
}complex;

int main(){
	float x1,x2,y1,y2;
	printf("Please type in two real number:\n");
	scanf("%f,%f",&x1,&x2);
	printf("Please type in two imaginary part:\n");
	scanf("%f,%f",&y1,&y2);

	complex z1,z2;

	char c;
	printf("Please choose a kind of calculation:\nA.addition\nB.subtraction\nC.multiplication\nD.division\n");
	scanf("%c",&c);

	switch(c){
		case"A":
			float sum = z1+z2;
			printf("Sum=\"%f\"+\"%f\"i/n",creal(sum),cimag(sum));
		case "B":
			float difference=z1-z2;
			printf("Difference=\"%f\"+\"%f\"i/n",creal(difference),cimag(difference));
		case "C":
			float product=z1*z2;
			printf("Product=\"%f\"+\"%f\"i/n",creal(product),cimag(product));
		case "D":
			float quotient=z1/z2;
			printf("Quotient=\"%f\"+\"%f\"i/n",creal(quotient),cimag(quotient));
	}

return 0;
}
