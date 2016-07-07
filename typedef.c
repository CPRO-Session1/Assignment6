// Julia Tan
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h> 

typedef struct {
	char name[5][100];
	int scores[5];
} student;

int main(){
	student s1;
	strcpy(s1.name[0], "Bettina");
	strcpy(s1.name[1], "Kayla");
	strcpy(s1.name[2], "Alex");
	strcpy(s1.name[3], "Nikki");
	strcpy(s1.name[4], "Kat");
	srand(time(0));
	int inputScore = 0;
	float average;
	for (int a = 0; a != 5; a++){
		 inputScore = (rand()%101);
		 s1.scores[a] = inputScore;
		 printf("Name: %s\n", s1.name[a]);
		 printf("Score: %d\n\n", s1.scores[a]);
		 average += s1.scores[a];
	}
	printf("Class average is: %.2f\n", average/5);
	return 0;
}

