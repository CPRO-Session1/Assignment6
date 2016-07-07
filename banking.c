//Olivier Gabison - Banking System

#include <stdio.h>

struct bank {
  char name[100];
  int number;
  float balance;
};

struct bank deposit(struct bank bank, float money){
  printf("Depositing $%f into your account...\n", money);
  bank.balance += money;
  printf("Your account now has $%f\n", bank.balance);
  return bank;
}

struct bank withdraw(struct bank bank, float money){
  printf("Withdrawing $%f from your account...\n", money);
  bank.balance -= money;
  printf("Your account now has $%f\n", bank.balance);
  return bank;
}

int getBal(struct bank bank){
  printf("%s has $%f\n", bank.name, bank.balance);
}
int main(){

  struct bank bank1 = {"Account 1", 1, 100.0};
  struct bank bank2 = {"Account 2", 2, 1000.0};

  getBal(bank1);
  bank1 = deposit(bank1, 100);
  bank1 = withdraw(bank1, 50);
  getBal(bank1);

  getBal(bank2);
  bank2 = deposit(bank2, 200);
  bank2 = withdraw(bank2, 100);
  getBal(bank2);




  return 0;
}
