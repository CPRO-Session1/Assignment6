/* Matthew Danielson
*  7/5/16
*  quadratic.c
*  solves the quadratic formula
*/ 

#include <stdio.h>
#include <math.h>

float quadratic(int, int, int);

int main(){
	printf("Please enter a:");
	int a;
	scanf("%d", &a);
	printf("\nPlease enter b:");
	int b;
	scanf("%d", &b);
	printf("\nPlease enter c:");
	int c;
	scanf("%d", &c);
	float value = quadratic(a, b, c);
	printf("%f \n", value);


}


float quadratic(int a, int b, int c){
	float y = pow(b, 2);
	y -= (4*a*c);
	float x = (-b + sqrt(y))/(2*a);
	return x;
}

