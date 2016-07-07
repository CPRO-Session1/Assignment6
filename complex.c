//Clarke Littlejohn
//Complex numbers
//could get the division to work i should split it up into multiple parts.

#include<stdio.h>
#include<string.h>


typedef struct{
	float real;
	float img;
}complx;
complx addition(complx,complx);
complx subtraction(complx,complx);
complx division(complx,complx);
complx multiplication(complx,complx);
void printcomplx(complx);

int main(){
	
	char input[3];
	complx nums[2];
	float stor;
	
	printf("Enter + for addition, - for subtraction, * for multiplication, and / for division: ");
	fgets(input,sizeof(input),stdin);
	input[1]='\0';
	
	printf("Enter in the first real number: ");
	scanf("%f",&stor);
	nums[0].real=stor;
	printf("Enter in the first imaginary number: ");
	scanf("%f",&stor);
	nums[0].img=stor;
	printf("Enter in the second real number: ");
	scanf("%f",&stor);
	nums[1].real=stor;
	printf("Enter in the second imaginary number: ");
	scanf("%f",&stor);
	nums[1].img=stor;

	switch(input[0]){
		case '+':
			printcomplx(addition(nums[0],nums[1]));
			break;
		case '-':
			printcomplx(subtraction(nums[0],nums[1]));
			break;
		case '*':
			printcomplx(multiplication(nums[0],nums[1]));
			break;
		case '/':
			printcomplx(division(nums[0],nums[1]));
			break;
		default:
			printf("Restart the program");
			break;
	}
	return 0;
}

complx addition(complx fZero,complx fOne){
	
	complx fTwo;

	fTwo.real=(fZero.real+fOne.real);
	fTwo.img=(fZero.img+fOne.img);
	return fTwo;

} 

complx subtraction(complx fZero,complx fOne)

{
	complx fTwo;
	
	fTwo.real=(fZero.real-fOne.real);
	fTwo.img=(fZero.img-fOne.img);
	return fTwo;
}

complx multiplication(complx fZero,complx fOne){

	complx fTwo;
	
	fTwo.real=(fZero.real*fOne.real)+(fZero.img*fOne.img);
	fTwo.img=(fZero.real*fOne.img)+(fZero.img*fOne.real);
	return fTwo;
}

complx division(complx fZero,complx fOne){

	complx fTwo;
	
	fTwo.real=((fZero.real*fOne.real)+(fZero.img* (-1*fOne.img)))/((fOne.real*fOne.real)+(fOne.img*(-1*fOne.img)));
	fTwo.img=(fZero.real*fOne.img)+(fZero.img*fOne.real)/((fOne.real*fOne.real)+(fOne.img*(-1*fOne.img)));
	return fTwo;

}

void printcomplx(complx out){

	printf("The answer is %.2f+%.2fi\n",out.real,out.img);
}






















