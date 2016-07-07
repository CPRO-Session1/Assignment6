//Justin Yu  This code is designed to present the average grades of five students//

#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[100];
	int age;
	int scores[5];
} student;

float average (float average) {
	average = 0;
	int i;

	for(i = 0; i < 5; i++) {
		average += student.scores[i];
}
average /= 5;

printf("%s, average: %f", student.name, average);
	

int main() {

struct student s1 = {"Caleb", 17, {89,90,91,92,93}};
struct student s2 = {"Peter", 17, {91,92,93,94,95}};
struct student s3 = {"Sam", 18, {93,94,95,96,97}};
struct student s4 = {"Andrew", 16, {94,95,96,97,98}};
struct student s5 = {"Justin", 16, {96,97,98,99,100}};

struct student student[] = {s1,s2,s3,s4,s5};

for(int i = 0; i < 5; i++) {
	avg(student[i]);
	printf("\n");
}

}

