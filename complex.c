/* Harry Brickner
 * provides functions for basic complex arithmetic. */
#include <stdio.h>

typedef struct cDouble {
	double imult;
	double add;
}cDouble;

void printCdouble(cDouble num){
	if(num.imult == 0)
		/* 0i + ? */
		printf("%.3lf", num.add);
	else if(num.add == 0)
		if(num.imult == 1)
			/* 1i + 0 */
			printf("i");
		else
			/* ?i + 0 */
			printf("%.3lfi", num.imult);
	else
		if(num.imult == 1)
			/* 1i + ? */
			printf("i%+.3lf", num.add);
		else
			/* ?i + ? */
			printf("%.3lfi%+.3lf", num.imult, num.add);
}



cDouble add(cDouble a, cDouble b){
	cDouble ret = {a.imult + b.imult, a.add + b.add};
	return ret;
}
cDouble sub(cDouble a, cDouble b){
	cDouble ret = {a.imult - b.imult, a.add - b.add};
	return ret;
}
cDouble mult(cDouble a, cDouble b){
	cDouble ret = {(a.imult * b.add) + (a.add * b.imult), (a.add * b.add)-(a.imult * b.imult)};
	return ret;
}
cDouble div(cDouble a, cDouble b){
	cDouble ret;
	double div = -(b.imult * b.imult) - (b.add * b.add);
	ret.imult = ((a.add * b.imult) - (b.add * a.imult)) / div;
	ret.add = -((a.imult * b.imult) + (a.add * b.add)) / div;
	return ret;
}

int main(){
	printf("Please input a calculation\nPlease note: numbers should be input as %%fi+%%f or %%fi-%%f.\nAlso note: There should be a space between the numbers and the operation, but not between the real and imaginary parts of the numbers.\n");
	cDouble a;
	cDouble b;
	char operation;
	scanf("%lfi%lf %c %lfi%lf", &(a.imult), &(a.add), &operation, &(b.imult), &(b.add));
	switch(operation){
		case '+': printCdouble(add(a, b)); break;
		case '-': printCdouble(sub(a, b)); break;
		case '*': printCdouble(mult(a, b)); break;
		case '/': printCdouble(div(a, b)); break;
	}
	printf("\n");	
	return 0;
}
