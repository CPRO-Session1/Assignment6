//Emma Ladouceur

//Hmmmm, this seems like the best way to do it, but i didn't use stuct. I'm not sure even how you would, but maybe that's better for the mult and div which I couldn't get to work. 

#include <stdio.h>
int add(int a, int b, int c, int d){
	int sum1, sum2;
	
	
		sum1 = a+c;
		sum2 = b+d;
	
	printf("The sum is %d + %di\n", sum1, sum2);
	

} 
int sub(int a, int b, int c, int d){
	int sum1, sum2;

		sum1=a-c;
		sum2 =b-d;

		printf("The difference is %d + %di\n", sum1, sum2);

} 

int mult(int a, int b, int c, int d){

} 

int div(int a, int b, int c, int d){

} 

int main(){

	int choice;
	int a, b,c,d;

	printf("What operation with complex numbers would you like to perform? \n 1 for addition\n 2 for subtraction \n 3 for multiplication \n 4 for division.\n");

	scanf("%d", &choice);

	if(choice ==1){
		printf("Enter a number a and b where b is bi\n");
		
			scanf("%d",&a);
			scanf("%d",&b);

		printf("Enter a number c and d where d is di\n");
			scanf("%d",&c);
			scanf("%d",&d);
		add(a,b,c,d);
	}

	if(choice ==2){
		 printf("Enter a number a and b where b is bi\n");
			scanf(" %d",&a);
			scanf(" %d",&b);

		printf("Enter a number c and d where d is di\n");
			scanf(" %d",&c);
			scanf(" %d",&d);
		sub(a,b,c,d);
}

//	if(choice == 3)

//	if(choice == 4)




}
