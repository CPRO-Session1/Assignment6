#include <stdio.h>

typedef struct {
	float real;
	float imag;
} cplex;

void display(cplex num)
{
	if (num.imag == 0.00)
		printf("%.2f\n", num.real);
	else if (num.real == 0.00)
		printf("%.2fi\n", num.imag);
}

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
	float new_real = (cplex1.real * cplex2.real) - (cplex1.imag * cplex2.imag);
	float new_imag = (cplex1.real * cplex2.imag) + (cplex1.imag * cplex2.real);
	cplex new_cplex = {new_real, new_imag};
	return new_cplex;
}

cplex divide(cplex cplex1, cplex cplex2)
{
	cplex2.imag *= -1;
	cplex new_cplex = multiply(cplex1, cplex2);
	new_cplex.real /= ((cplex2.real * cplex2.real) + (cplex2.imag * cplex2.imag));
	return new_cplex;
}

cplex create()
{
	cplex new_cplex;
	printf("Real Component of first number: ");
	scanf("%f", &new_cplex.real);
	printf("Imaginary component of number: ");
	scanf("%f", &new_cplex.imag);
	return new_cplex;
}


int main()
{
	printf("Choose an operation: 1.+ 2.- 3.* 4./\n");
	int oper;
	scanf("%d", &oper);

	printf("First number\n");
	cplex cplex1 = create();

	printf("Second number\n");
	cplex cplex2 = create();

	cplex end_cplex;
	switch (oper) 
	{
		case 1:
			end_cplex = add(cplex1, cplex2);
			break;
		case 2:
			end_cplex = subtract(cplex1,cplex2);
			break;
		case 3:
			end_cplex = multiply(cplex1,cplex2);
			break;
		case 4:
			end_cplex = divide(cplex1,cplex2);
			break;
	}
	printf("ANSWER: ");
	display(end_cplex);
	return 0;
}
