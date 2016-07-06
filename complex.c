#include <stdio.h>
/*Jack Rosen. The purpose of this program is to do computations with complex numbers using structures and functions. */
typedef struct complexNumber
{
	float real;
	float complexN;
}number;
float add1(float k, float f)
{
	k += f;
	return k;
}
float add2(float l, float s)
{
	l += s;
	return l;
}
float subtract1(float k, float f)
{
	k -= f;
	return k;
}
float subtract2(float l, float s)
{
	l -= s;
	return l;
}
float multiply1 (float k, float l, float f, float s)
{
	k *= f;
	l *= s;
	k -= l;
	return k;
}
float multiply2 (float k, float l, float f, float s)
{
	k *= s;
	f *= l;
	k += f;
	return k;
}
float divide1(float k, float l, float f, float s)
{
	k *= f;
	l *= s;
	k += l;
	return k;
}
float divide2(float k, float l, float f, float s)
{
	k *= s;
	f *= l;
	f -= k;
	return f;

}
int main()
{
	float real1, complex1, real2, complex2;
	printf("What do you want the real number to be?\n");
	scanf("%f", &real1);
	printf("What do you want the complex part to be?\n");
	scanf("%f", &complex1);
	printf("What do you want the real number to be?\n");
	scanf("%f", &real2);
	printf("What do you want the complex part to be?\n");
	scanf("%f", &complex2);
	number first = {real1, complex1}, second = {real2, complex2}, answer= {};
	printf("What do you want to do to the numbers? +, -, *, /\n");
	char decision;
	scanf("%c", &decision);
	if (decision == '\n')
	{
		decision = getchar();
	}
	if (decision == '+')
	{
		answer.real = add1(real1, real2);
		answer.complexN = add2(complex1, complex2);
		printf("%f + %fi\n", answer.real, answer.complexN);
	}
	else if (decision == '-')
	{
		answer.real = subtract1(real1, real2);
		answer.complexN = subtract2(complex1, complex2);
		printf("%f + %fi\n", answer.real, answer.complexN);
	}
	else if (decision == '*')
	{
		answer.real = multiply1(real1, complex1, real2, complex2);
		answer.complexN = multiply2(real1, complex1, real2, complex2);
		printf("%f + %fi\n", answer.real, answer.complexN);
	}
	else if (decision == '/')
	{
		answer.real = divide1(real1, complex1, real2, complex2)/((real2 * real2) + (complex2 * complex2));
		answer.complexN = divide2 (real1, complex1, real2, complex2)/((real2 * real2) + (complex2 * complex2));
		printf("%f + %fi\n", answer.real, answer.complexN);
	}
}
