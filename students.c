/* Yael Kelmer.
   Make a structure array for 5 students that includes their name, age, and an average of 5 test scores. */

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int age;
	int scores[5];
} student; /*this creates the structure for the student data*/

float calcAvg (student st) {
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++) {
		sum += st.scores[i];
	}
	return (float)sum / 5;
} /*this is a function that calculates the averages for the 5 test scores for each student */

int main ()
{	
	/*this initializes all of the information about the students*/
	student s1 = {"Anna", 15, {88, 76, 90, 57, 30} };
	student s2 = {"Jake", 16, {89, 45, 67, 83, 98} };
	student s3 = {"Maya", 17, {34, 99, 65, 48, 76} };
	student s4 = {"Adam", 18, {65, 90, 96, 87, 43} };
	student s5 = {"Drew", 19, {90, 97, 76, 89, 65} };

	/*this calculates the average of the 5 grades for each student*/
	float average1 = calcAvg (s1);
	float average2 = calcAvg (s2);
	float average3 = calcAvg (s3);
	float average4 = calcAvg (s4);
	float average5 = calcAvg (s5);

	/*this prints out all of the information about each student*/
	printf ("Student name is %s, student age is %d, and student average is %f\n", s1.name, s1.age, average1);	
	printf ("Student name is %s, student age is %d, and student average is %f\n", s2.name, s2.age, average2);
	printf ("Student name is %s, student age is %d, and student average is %f\n", s3.name, s3.age, average3);
	printf ("Student name is %s, student age is %d, and student average is %f\n", s4.name, s4.age, average4);
	printf ("Student name is %s, student age is %d, and student average is %f\n", s5.name, s5.age, average5); 

}  	

