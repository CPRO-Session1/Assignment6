#include <stdio.h>

int main() {

int variable1;
int calculation;
int variable2;
int output;

	printf("Enter a variable\n");
	scanf("%d", &variable1);

	printf("indicate which type of calculation you want to perform, input 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
	scanf("%d", &calculation);

	printf("Enter another variable\n");
	scanf("%d", &variable2);

if(calculation == 1) {
output = variable1 + variable2;
printf("%d\n",output); }
else if(calculation == 2) {
output = variable1 - variable2;
printf("%d\n",output); }
else if(calculation == 3) {
output = variable1 * variable2;
printf("%d\n",output); }
else if(calculation == 4) {
output = variable1 / variable2;
printf("%d\n",output); }
else {
printf("invalid calculation type\n");}

return 0;
}


