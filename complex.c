/*Ava N.*/
//This program implements complex numbers as a structure and allows a user to perform calculations with them. The structure contains real and imaginary portions of a complex number. The functions add, subtract, multiply, divide and display complex numbers. I have allowed the user to select what functions they want to use (much like my calculator.c programs from last week) and enter the complex numbers they want to perform calculations with.

#include <stdio.h>
#include <math.h>

typedef struct {
	int real; //real	
	int imag; //imaginary
} complx;

int main(){   
   complx f; //first number
   complx s; //second number
   complx a; //answer
   complx o; //operation

   printf("Choose one of the following: +, -, *, /, or %%: \n");
   scanf("%d\n", &o.real);

   printf("Pick a real number: \n");
   scanf("%d\n", &f.real);

   printf("Pick another real number: \n");
   scanf("%d\n", &s.real);

   printf("Choose one of the following: +, -, *, /, or %%: \n");
   scanf("%d\n", &o.imag);

   printf("Pick an imaginary number: \n");
   scanf("%d\n", &f.imag);

   printf("Pick another imaginary number: \n");
   scanf("%d\n", &s.imag);

   switch(o.real){
	    case '+':
	            a.real=f.real+s.real;
		    printf("The addition is: %d\n", a.real);
	            break;
	    case '-':
		    a.real=f.real-s.real;   
		    printf("The subtraction is: %d\n", a.real);
	            break;	
	    case '/':
		    a.real=f.real/s.real;
		    printf("The division is: %d\n", a.real);
		    break;
	    case '*':
       	    	    a.real=f.real*s.real;
	            printf("The multiplication is: %d\n", a.real);
		    break;
	    case '%':
		    a.real=(int)f.real%(int)s.real;
		    printf("The percentage is: %d\n", a.real);
		    break;
	    default:
		    printf("Your response was invalid. Please try again.");
  }
   switch(o.imag){
	    case '+':
	            a.imag=f.imag+s.imag;
		    printf("The addition is: %d\n", a.imag);
	            break;
	    case '-':
		    a.imag=f.imag-s.imag;   
		    printf("The subtraction is: %d\n", a.imag);
	            break;	
	    case '/':
		    a.imag=f.imag/s.imag;
		    printf("The division is:%d \n", a.imag);
		    break;
	    case '*':
       	    	    a.imag=f.imag*s.imag;
	            printf("The multiplication is: %d\n", a.imag);
		    break;
	    case '%':
		    a.imag=(int)f.imag%(int)s.imag;
		    printf("The percentage is: %d\n", a.imag);
		    break;
	    default:
		    printf("Your response was invalid. Please try again.");
  }
   printf("%d \n", a.imag);
   printf("%d \n", a.real);

   return 0;
}
