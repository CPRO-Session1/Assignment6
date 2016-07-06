/*Ava N.*/
//Student structure with 5 names, their grades (scores on tests), their ages, and an average of their grades.

#include <stdio.h>
#include <string.h>

typedef struct{
	char name[100];
	int age;
	int scores[5];
} student;

student grade(student st, int grade, int num) {
	st.scores[num]=grade;
	return st;
}
float average(student st, int no_of_grades){
		float sum=0;
		for(int num=0 ; num < no_of_grades ; num++){
			sum += st.scores[num];
		}

    	return sum/no_of_grades;
	}
	
int main(){
	student s1, s2, s3, s4, s5;
	strcpy(s1.name, "Sally");
	strcpy(s2.name, "Curtis");
	strcpy(s3.name, "Marianne");
	strcpy(s4.name, "John");
	strcpy(s5.name, "Peter");


	s1.age = 15;
	s2.age = 16;
	s3.age = 17;
	s4.age = 100;
	s5.age = -1;

	printf("Name: %s\tAge: %d\n", s1.name, s1.age);
	printf("Name: %s\tAge: %d\n", s2.name, s2.age);
	printf("Name: %s\tAge: %d\n", s3.name, s3.age);
	printf("Name: %s\tAge: %d\n", s4.name, s4.age);
	printf("Name: %s\tAge: %d\n", s5.name, s5.age);

	s1=grade(s1, 100, 0);
	s1=grade(s1, 96, 1);
	s1=grade(s1, 99, 2);	
	s1=grade(s1, 100, 3);
	s1=grade(s1, 100, 4);
	s2=grade(s2, 94, 0);
	s2=grade(s2, 60, 1);
	s2=grade(s2, 40, 2);
	s2=grade(s2, 94, 3);
	s2=grade(s1, 100, 4);
	s3=grade(s3, 96, 0);
	s3=grade(s3, 100, 1);
	s3=grade(s3, 94, 2);
	s3=grade(s3, 96, 3);
	s3=grade(s3, 100, 4);
	s4=grade(s4, 90, 0);
	s4=grade(s4, 68, 1);
	s4=grade(s4, 81, 2);
	s4=grade(s4, 75, 3);
	s4=grade(s4, 100, 4);
	s5=grade(s5, 90, 0);
	s5=grade(s5, 68, 1);
	s5=grade(s5, 30, 2);
	s5=grade(s5, 75, 3);
	s5=grade(s5, 100, 4);
	/*
	printf("Grade: %d\n", s1.scores[0]);
	printf("Grade: %d\n", s1.scores[1]);
	printf("Grade: %d\n", s1.scores[2]);
	printf("Grade: %d\n", s1.scores[3]);
	printf("Grade: %d\n", s2.scores[0]);
	printf("Grade: %d\n", s2.scores[1]);
	printf("Grade: %d\n", s2.scores[2]);
	printf("Grade: %d\n", s2.scores[3]);
	printf("Grade: %d\n", s3.scores[0]);
	printf("Grade: %d\n", s3.scores[1]);
	printf("Grade: %d\n", s3.scores[2]);
	printf("Grade: %d\n", s3.scores[3]);
	printf("Grade: %d\n", s4.scores[0]);
	printf("Grade: %d\n", s4.scores[1]);
	printf("Grade: %d\n", s4.scores[2]);
	printf("Grade: %d\n", s4.scores[3]);
	printf("Grade: %d\n", s5.scores[0]);
	printf("Grade: %d\n", s5.scores[1]);
	printf("Grade: %d\n", s5.scores[2]);
	printf("Grade: %d\n", s5.scores[3]);
*/
	
	printf("\n");

	
	printf("Average grade of Sally: %f \n",average(s1, 4)); //average(structure,no. of grades)
	printf("Average of Curtis: %f \n",average(s2, 4));
	printf("Average of Marianne: %f \n",average(s3, 4));
	printf("Average of John: %f \n",average(s4, 4));
	printf("Average of Peter: %f \n",average(s5, 4));


	return 0;

}
