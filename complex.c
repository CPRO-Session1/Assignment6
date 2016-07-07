/*Rumeet Goradia - Complex Numbers*/
#include<stdio.h>
#include<string.h>
typedef struct {
	float real;
	float imag;
} comp;

comp add (comp x, comp y)
{
	comp temp;
	temp.real=x.real+y.real;
	temp.imag=x.imag+y.imag;
	
	return(temp);
}

comp sub (comp x, comp y)
{
	comp temp;
	temp.real=x.real-y.real;
	temp.imag=x.imag-y.imag;
	
	return(temp);
}

comp mul (comp x, comp y)
{
	comp temp;
	temp.real=(x.real*y.real)-(x.imag*y.imag);
	temp.imag=(x.real*y.imag)+(x.imag*y.real);
	
	return temp;

}

comp div (comp x, comp y)
{
	comp num, den;
	y.imag=-y.imag;
	num.real=(x.real*y.real)-(x.imag*y.imag);
	num.imag=(x.real*y.imag)+(x.imag*y.real);
	den.real=(y.real*y.real)+(y.imag*y.imag);
	comp quo;
	quo.real=num.real/den.real;
	quo.imag=num.imag/den.real;
	
	return quo;
}

void printer (comp x)
{
	printf("%f", x.real);
	printf("%+f", x.imag);
	printf("i\n");
	return;
}

int main()
{
	comp x, y;
	printf("Please input the real and imaginary portions of the first complex number.\n");
	scanf("%f", &x.real);
	scanf("%f", &x.imag);
	printf("Please input the real and imaginary portions of the second complex number.\n");
	scanf("%f", &y.real);
	scanf("%f", &y.imag);
	comp ans;
	getchar();
	char op;
	char prntop[100];
	printf("Please choose one of the following operations:\n+ ADDITION\n- SUBTRACTION\n* MULTIPLICATION\n/ DIVISION\n");
	scanf("%c", &op);
	switch (op)
	{
		case '+':
			ans=add(x,y);
			strcpy(prntop, "Sum: ");
			break;
		case '-':
			ans=sub(x,y);
			strcpy(prntop, "Difference: ");
			break;
		case '*':
			ans=mul(x,y);
			strcpy(prntop, "Product: ");
			break;
		case '/':
			ans=div(x,y);
			strcpy(prntop, "Quotient: ");
			break;
		default:
			printf("That was not an option.\n");
	}
	printf("First complex number: ");
	printer(x);
	printf("Second complex number: ");
	printer(y);
	printf("%s", prntop);
	printer(ans);
	return 0;
}
	
	
