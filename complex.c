//Olivier Gabison - Add/Subtract/Multiply/Divide with complex numbers

#include <stdio.h>

struct complex {
  int real;
  int imag;
};

struct complex add(struct complex complex1, struct complex complex2){
  int c_real = complex1.real + complex2.real;
  int c_imag = complex1.imag + complex2.imag;
  struct complex complex3 = {c_real, c_imag};
  return complex3;
}

struct complex subtract(struct complex complex1, struct complex complex2){
  int c_real = complex1.real - complex2.real;
  int c_imag = complex1.imag - complex2.imag;
  struct complex complex3 = {c_real, c_imag};
  return complex3;
}

struct complex multiply(struct complex complex1, struct complex complex2){ //(3 + 2i)(5 + 2i)
  int c_real = (complex1.real * complex2.real);
  int c_imag = (complex1.imag * complex2.real) + (complex1.real * complex2.imag) + (-(complex1.imag * complex2.imag));
  struct complex complex3 = {c_real, c_imag};
  return complex3;
}

struct complex divide(struct complex complex1, struct complex complex2){ //I don't know how to divide :(
  int c_real = (complex1.real * complex2.real);
  int c_imag = (complex1.imag * complex2.real) + (complex1.real * complex2.imag) + (-(complex1.imag * complex2.imag));
  struct complex complex3 = {c_real, c_imag};
  return complex3;
}

void display(struct complex complex){
  printf("The sum is: %d + %di\n", complex.real, complex.imag);
}

int main(){

  printf("Welcome to the complex number calculator.\n");
  printf("Please pick a choice:\n");
  printf("[1] Add\n");
  printf("[2] Subtract\n");
  printf("[3] Multiply\n");
  printf("[4] Divide");
  int choice;
  int a_real;
  int a_imag;
  int b_real;
  int b_imag;
  int c_real;
  int c_imag;
  scanf("\n%d", &choice);
  if(choice >= 0 && choice <= 4){
    printf("Time to make your first complex number...\n");
    printf("Enter your a (a + bi)");
    scanf("\n%d", a_real);
    printf("Enter your b (a + bi)");
    scanf("\n%d", a_imag);

    printf("\nTime to make your second complex number...\n");
    printf("Enter your a (a + bi)");
    scanf("\n%d", b_real);
    printf("Enter your b (a + bi)");
    scanf("\n%d", b_imag);

    struct complex complex1 = {a_real, a_imag};
    struct complex complex2 = {b_real, b_imag};
    struct complex complex3;
    if(choice == 1){ //ADDING
      complex3 = add(complex1, complex2);
    } else if (choice == 2){ //SUBTRACTING
      complex3 = subtract(complex1, complex2);
    } else if (choice == 3){ //MULTIPLY
      complex3 = multiply(complex1, complex2);
    } else if (choice == 4){
      complex3 = divide(complex1, complex2);
    }

    display(complex3);
  }


  return 0;
}
