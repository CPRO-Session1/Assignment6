//Anya Lauria 
// Calculating complex numbers 

#include <stdio.h>
#include <math.h>
#include <string.h>


typedef struct{

	int real; 
	int imag; 
}comcal; 

int main (){

comcal x; 
comcal y;
comcal a; 
comcal f;

int z; 
int zz;

printf("What operations would you to like to perform?\n");
printf("Your options are: 1 for '+' \t 2 for '-' \t 3 for '*' \t 4 for '-' \t \n");
printf("\nEnter 3 operations: Your first entry for real numbers, second for imaginary numbers, and 3rd for the combined part\n"); 
scanf("%d", &f.real);
scanf("%d", &f.imag);
scanf("%d", &z); 


printf("\nPick two real numbers\n");
scanf("%d", &x.real);
scanf("%d", &y.real); 

printf("\nPick two imaginary numbers\n"); 
scanf("%d", &x.imag); 
scanf("%d", &y.imag); 

switch(f.real){
                  
            case 1:
	            a.real= x.real+y.real;
	            break;

	    case 2:
		    a.real= x.real-y.real;   
	            break;	

	    case 3:
		    a.real= x.real/y.real;
		    break;

	    case 4:
       	    	    a.real= x.real*y.real;
		    break;
                    
  }


switch(f.imag){
	    case 1:
	            a.imag= x.imag+y.imag;
	            break;

	    case 2:
		    a.imag= x.imag-y.imag;   		    
	            break;	

	    case 3:
		    a.imag= x.imag/y.imag;		    
		    break;

	    case 4:
       	    	    a.imag= x.imag*y.imag;	            
		    break;

            }


switch(z){
	    case 1:
	            zz= a.imag+a.real;
	            break;

	    case 2:
		    zz= a.real-a.imag;   		    
	            break;	

	    case 3:
		    zz= a.real/a.imag;		    
		    break;

	    case 4:
       	    	    zz= a.imag*a.real;	            
		    break;

            }

//At this point, I wasn't too sure on how exactly to combine the two parts, as imaginary numbers are written in terms of   i
//So I'm printing two statements where one combines the real and imaginary part, and where one prints them 
// separately 
//I know neither of them are mathematically correct, and I will fix this. The imaginary part should either have i or 
//a number, and I will change the code to incorporate that, which would change the functions in the second switch 
//statements, and the third switch statement will be deleted. 
//I am a little uncertain on how to incorporate the nuances of using operations on i in the code, but I will update
//the code soon. 
//Or perhaps I should print them as a.real + a.imagi? I'm not sure 
printf("\nThe real part is %d and the imaginary part is %di\n", a.real, a.imag);
printf("Combined, they are %di\n", zz); 

}
