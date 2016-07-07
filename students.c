//Olivier Gabison - Finds the average of student grades

#include <stdio.h>

struct student {
  char name[100];
  int age;
  int scores[5];
};

void avg(struct student student){
  float average = 0;

  for(int i = 0; i < 5; i++){
    average += student.scores[i];
  }
  average /= 5;

  printf("%s's has an average grade of %f", student.name, average);
}

int main(){

  struct student s1 = {"Alex", 10, {10, 20, 15, 13, 12}};
  struct student s2 = {"Joe", 12, {15,20,30,45,23}};
  struct student s3  = {"Bob", 16, {12,70,70,48,25}};
  struct student s4 = {"Victor", 18, {65,90,80,65,63}};
  struct student s5 = {"Davis", 12, {75,80,30,65,23}};

  struct student student[] = {s1, s2, s3, s4, s5};

  for(int i = 0; i < 5; i++){
    avg(student[i]);
    printf("\n");
  }


}
