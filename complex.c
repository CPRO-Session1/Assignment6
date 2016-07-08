#include <stdio.h>
#include <math.h>

typedef struct{
	float aNum;
	float bNum;


}comp;

float Asum(float a1, float a2){
	int atotal;
	atotal = a1+a2;
	return atotal;
	}

float Bsum(float b1, float b2){
	float btotal;
        btotal = b1+b2;
        return btotal;
        }


float Asub(float a1, float a2){
	float adiff;
	adiff = a1-a2;
	return adiff;
	}

float Bsub(float b1, float b2){
        float bdiff;
        bdiff = b1-b2;
        return bdiff;
        }

float realMult(float a1, float a2, float b1, float b2) {

	float rProduct;
	rProduct = a1*a2-b1*b2;
	return rProduct;
	}

float imgMult(float a1, float a2, float b1, float b2) {

	float iProduct;
	iProduct = a1*b2+a2*b1;
	return iProduct;
	}

float realDiv(float a1, float a2, float b1, float b2) {
	
	float rQuotient;
	rQuotient = ((a1*b1) + (a2*b2)) / ((b1*b1) + (b2*b2));
	return rQuotient;
	}

float imgDiv(float a1, float a2, float b1, float b2) {
	float iQuotient;
	iQuotient = ((a2*b1) - (a1*b2) / (b1*b1) + (b2*b2));
	return iQuotient;
	}


int main() {

	float a1, a2, b1, b2;
	int choice;

	comp term1, term2;

	printf("Enter the first a\n");
	 scanf("%f", &term1.aNum);

	printf("Enter the second a\n");
         scanf("%f", &term2.aNum);

	printf("Enter the first b\n");
         scanf("%f", &term1.bNum);

	printf("Enter the second b\n");
         scanf("%f", &term2.bNum);

	printf("Choose an operand: 1 = +, 2 = -, 3 = *, 4 = /\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
	printf("%f", Asum(term1.aNum, term2.aNum));
	printf("+");
	printf("%f", Bsum(term1.bNum, term2.bNum));
	printf("i\n");
	}
	  else if (choice == 2)
	  {
	  printf("%f", Asub(term1.aNum, term2.aNum));
	  printf("+");
	  printf("%f", Bsub(term1.bNum, term2.bNum));
	  printf("i\n");
	  }
	    else if (choice == 3)
	    {
	    printf("%f", realMult(term1.aNum, term2.aNum, term1.bNum, term2.bNum));
	    printf("+");
	    printf("%f", imgMult(term1.aNum, term2.aNum, term1.bNum, term2.bNum));
	    printf("i\n");
	    }
	      else if (choice == 4)
	      {
	      printf("%f", realDiv(term1.aNum, term2.aNum, term1.bNum, term2.bNum));
	      printf("+");
	      printf("%f", imgDiv(term1.aNum, term2.aNum, term1.bNum, term2.bNum));
	      printf("i\n");
	      }

}














