//Bettina Benitez
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
	char name[5][100];
	int scores[4];
} student;

/*student grade(student st, int grade, int num) {
	srand(time(0));
	grade = rand() %101;
	st.scores[num] = grade;
	return st;
}*/

int main () {
	student x;
	strcpy(x.name[0], "Bettina");
	strcpy(x.name[1], "Julia");
	strcpy(x.name[2], "Jack");
	strcpy(x.name[3], "Oscar");
	strcpy(x.name[4], "Eli");
	srand(time(0));
	int i;
	float ave = 0;
	for (i = 0; i < 5; i++) {
		x.scores[i] = rand()%101;
		printf("Name: %s \n Score: %d\n", x.name[i], x.scores[i]);
		ave =  ave + x.scores[i];
	}  
	ave = ave / 6;
	printf("%.2f\n", ave);
	return 0;
}
