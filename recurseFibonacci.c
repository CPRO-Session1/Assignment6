#include <stdio.h>

int main() {

long int i = 0;
long int fib[100];
long int j;
int lim;
fib[0] = 1;
fib[1] = 1;

	printf("Enter the amount of terms you would like to print.\n");
	scanf("%d", &lim);

	for (i = 2; i < 100; i++) {

	fib[i] = fib[i-1]+fib[i-2];
	}

	for (j = 1; j <= lim; j++) {
	
	printf("%ld\n", fib[j]);
	}
}
