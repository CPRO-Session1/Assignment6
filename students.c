#include <stdio.h>

typedef struct student {

	char name[100];
	int age;
	int scores[5];
	int average;
	int sum,i;

} student;




int main(){
	
	
	
	student s1= {"Emma", 17, {60,99,100,40,30}};


	student s2= {"Katherine", 16, {88,99,47,89,100}};
	student s3={"Aly", 17, {100, 99, 90, 54, 70}};

	//int grades[] = {10, 10, 12, 29, 10};
	student s4={"George", 4, {100,99,99,89,88}};
	student s5={"Dean", 1, {33,78,55,66,33}};
	

	student s[] = {s1,s2,s3,s4,s5};
	int i, j;
	int sum=0;
	for(i=0;i<5;i++){
		sum = 0;
		for(j=0; j<5;j++){
		sum = sum + s[i].scores[j];
		
	}
		s[i].average = sum/5;
	
	}
	
	

	//Student 1
	printf("Name: %s\n", s[0].name);
	printf("GPA: %d\n", s[0].average);	
	printf("Age: %d\n", s[0].age);
	//Student 2
	printf("Name: %s\n", s[1].name);
	printf("Age: %d\n", s[1].age);
	printf("GPA: %d\n", s[1].average);
	//Student 3
	printf("Name: %s\n", s[2].name);
	printf("GPA: %d\n", s[2].average);
	printf("Age: %d\n", s[2].age);
	//Student 4
	printf("Name: %s\n", s[3].name);
	printf("GPA: %d\n", s[3].average);
	printf("Age: %d\n", s[3].age);
	//Student 5
	printf("Name: %s\n", s[4].name);
	printf("GPA: %d\n", s[4].average);
	printf("Age: %d\n", s[4].age);
}
