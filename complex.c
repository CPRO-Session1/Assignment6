#include <stdio.h>
#include <math.h>

typedef struct{
	float A1;
	float B1;
	float A2;
	float B2;
}comp;

float addA(float a1, float a2){
	float total;
	total = a1+a2;
	return total;
	}
float addB(float b1,float b2){
	float total;
	total = b1+b2;
	return total;
	}
float subA(float a1, float a2){
        float total;
        total = a1-a2;
        return total;
        }
float subB(float b1,float b2){
        float total;
        total = b1-b2;
        return total;
        }
float multiplyReal(float a1, float a2, float b1, float b2){
	float total;
	total = a1*a2-b1*b2;
	return total;
	}
float multiplyImg(float a1,float a2,float b1,float b2){
	float total;
	total = a1*b2+a2*b1;
	return total;
	}
float divReal(float a1, float a2, float b1, float b2){
	float total;
	total = ((a1*b1)+(a2*b2))/((b1*b1)+(b2*b2));
	return total;
	}
float divImg(float a1, float a2, float b1, float b2){
        float total;
	total = ((a2*b1)-(a1*b2))/((b1*b1)+(b2*b2));
	return total;
	}

int main (){
	int choice;
	float a1,b1,a2,b2;
	printf("enter you first A value\n");
	scanf("%f",&a1);
	printf("enter you first B value\n");
        scanf("%f",&b1);
	 printf("enter you second A value\n");
        scanf("%f",&a2);
        printf("enter you second B value\n");
        scanf("%f",&b2);
	comp firstNum={a1,b1};
	comp secondNum={a2,b2};
	printf("Pick the operation (1 is +, 2 is -, 3 is *, 4 is /)\n");
	scanf("%d", &choice);
	if (choice==1)
	{
	printf("%f\n",addA(a1,a2));
	printf("+\n");
	printf("%f\n",addB(b1,b2));
	printf("i\n");
	}	
	if (choice==2)
	{
	printf("%f\n",subA(a1,a2));
        printf("+\n");
	printf("%f\n",subB(b1,b2));
	printf("i\n");
        }
	if (choice==3)
	{
	printf("%f\n",multiplyReal(a1,b1,a2,b2));
	printf("+\n");
	printf("%f\n",multiplyImg(a1,a2,b1,b2));
	printf("i\n");
	}
	if (choice==4)
	{
	printf("%f\n",divReal(a1,b1,a2,b2));
        printf("+\n");
	printf("%f\n",divImg(a1,a2,b1,b2));
	printf("i\n");
}
}

