#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int age;
	int scores[5];
	int average;
} student;

int main(){
	student s1= {"Emma", 17, {45, 35, 60, 70, 90}};
	student s2 = {"Katie", 19, {45, 35, 60, 70, 90}};
	student s3 = {"Victoria", 16, {65, 75, 85, 92, 82}};
	student s4 = {"Vicky", 12, {55, 25, 60, 70, 90}};
	student s5 = {"Deluca", 90, {70, 80, 90, 100, 90}};

	student s[] = {s1, s2, s3, s4, s5};

	int i, sum=0, j;

	for(i=0; i<5; i++){
		sum= 0;
		for(j=0; j<5; j++){
			sum = sum + s[i].scores[j];
	
		}
		s[i].average = sum/5;
	
	}

	//print students
	
	printf("Name: %s\n", s[0].name);
	printf("Age: %d\n", s[0]. age);
	printf("Average: %d\n", s[0].average);
	printf("\n");
	printf("Name: %s\n", s[1].name);
	printf("Age: %d\n", s[1].age);
	printf("Average: %d\n", s[1].average);
	printf("\n");
	printf("Name: %s\n", s[2].name);
	printf("Age: %d\n", s[2]. age);
	printf("Average: %d\n", s[2].average);
	printf("\n");
	printf("Name: %s\n", s[3].name);
	printf("Age: %d\n", s[3].age);
	printf("Average: %d\n", s[3].average);
	printf("\n");
	printf("Name: %s\n", s[4].name);
	printf("Age: %d\n", s[4].name);
	printf("Average: %d\n", s[4].average);

	return 0;

}
