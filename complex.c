#include <stdio.h>

typedef struct ComplexNumbers {
	int real;
	int i;
} comp;

int main() 
{
	printf("This program performs calculations on two complex numbers.\n");
	printf("First please enter the real part of the complex number, enter, and then the imaginary part(but don't include i when you type it)\n");
	printf("Please enter the first complex number\n");
	comp c1;
	scanf("%d", &c1.real);
	scanf("%d", &c1.i);
	printf("You entered %d + %di\n", c1.real, c1.i);
	printf("Please enter the second complex number\n");
	comp c2;
	scanf("%d", &c2.real);
	scanf("%d", &c2.i);
	printf("You entered %d + %di\n", c2.real, c2.i);
	printf("What computation would you like to perform?\n?");
	printf("Addition (1), Subtraction (2), Multiplication (3), or Division (4)?\n");
	int user;
	scanf("%d", &user);
	switch (user)
	{
		case 1:
			printf("You chose addition\n");
			printf("(%d + %di) + (%d + %di) = %d + %di\n", c1.real, c1.i, c2.real, c2.i, c1.real + c2.real, c1.i + c2.i);
			break;
		case 2:
			printf("You chose subtraction\n");
			printf("(%d + %di) - (%d + %di) = %d + %di\n", c1.real, c1.i, c2.real, c2.i, c1.real - c2.real, c1.i - c2.i);
			break;
		case 3:
			printf("You chose multiplication\n");
			printf("(%d + %di) * (%d + %di) = %d + %di\n", c1.real, c1.i, c2.real, c2.i, c1.real * c2.real - c1.i * c2.i, c1.real * c2.i + c1.i * c2.real);
			break;
		case 4:
			printf("You chose division\n");
			printf("(%d + %di) / (%d + %di) = %f + %fi\n", c1.real, c1.i, c2.real, c2.i, (c1.real * c2.real + c1.i * c2.i)/ (float) (c2.real * c2.real + c2.i * c2.i), (c1.i * c2.real - c1.real * c2.i) / (float) (c2.real * c2.real + c2.i * c2.i)); //I get this is stupidly long but at this point I'm just proud it works
			break;
	}
	return 0;
}
