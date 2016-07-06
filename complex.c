#include <stdio.h>

typedef struct {
	float real;
	float imag;
} cplex;

cplex add(cplex cplex1, cplex cplex2)
{
	float new_real = cplex1.real + cplex2.real;
	float new_imag = cplex1.imag + cplex2.imag;
	cplex new_cplex = {new_real, new_imag};
	return new_cplex;

}

cplex subtract(cplex cplex1, cplex cplex2)
{
	cplex2.real *= -1;
	cplex2.imag *= -1;
	cplex new_cplex = add(cplex1, cplex2);
	return new_cplex;
}

cplex multiply(cplex cplex1, cplex cplex2)
{
	float new_real = (cplex1.real * cplex2.real) + (cplex1.imag * cplex2.imag);
	float new_imag = (cplex1.real * cplex2.imag) + (cplex1.imag * cplex2.real);
	cplex new_cplex = {new_real, new_imag};
	return new_cplex;
}

cplex divide(cplex cplex1, cplex cplex2)
{
	cplex2.real = 1/cplex2.real;
	cplex2.imag = 1/cplex2.imag;
	cplex new_cplex = multiply(cplex1, cplex2);
	return new_cplex;
}

int main()
{
	printf("Choose an operation: 1.+ 2.- 3.* 4./");
	return 0;
}
