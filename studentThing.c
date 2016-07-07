/* Harry Brickner
 * Makes a bunch of students, then prints out their average score */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Student{
	char name[20];
	int age;
	float scores[5];
}Student;

int main(){
	srand(time(0));
    struct Student students[5];
	char names[5][9] = {"Bob\0","Joe\0","John\0","Alice\0","Reginald\0"};
	for(int i = 0; i < 5; i++){
		strcpy(students[i].name, names[i]);
		students[i].age = (rand() % 18) + 16;
		for(int j = 0; j < 5; j++)
			students[i].scores[j] = (float)(rand() % 1000) / 10;
	}

	for(int i = 0; i < 5; i++){
		printf("Name: %s\nScores:", students[i].name);
		float average = 0;
		for(int j = 0; j < 5; j++){
			average += students[i].scores[j] / 5;
			printf(" %d=%04.1f", j, students[i].scores[j]);
		}
		printf("\nAverage: %.1f\n\n", average);

	}
}
