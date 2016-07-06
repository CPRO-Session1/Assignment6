//Anya Lauria 
//Student structure with five names, their grades and an average of their grades 
 
#include <stdio.h> 
#include <string.h> 

typedef struct{
	char name[100]; 
	int age; 
	int scores[2]; 
        double average;
} student; 

typedef struct arr {
	int a[5]; 

} arr; 


student grade(student st, int grade, int num) { 
	st.scores[num] = grade; 
	return st; 

}

double calc_average(student st)
{
    int i;
    double sum = 0;

    
    for (i = 0; i < 2; i++)
        sum = sum + st.scores[i];

    
    return sum / 2;
}

int main ()
{
	student s1, s2, s3, s4, s5; 
	strcpy(s1.name, "Bilbo"); 
	strcpy(s2.name, "Frodo");
	strcpy(s3.name, "Samwise"); 
	strcpy(s4.name, "Pippin"); 
	strcpy(s5.name, "Merry"); 

	s1.age = 111;
	s2.age = 32; 
	s3.age = 40; 
	s4.age = 20; 
	s5.age = 23;


	printf("Name: %s\t Age: %d\n", s1.name, s1.age);
	printf("Name: %s\t Age: %d\n", s2.name, s2.age); 
	printf("Name: %s\t Age: %d\n", s3.name, s3.age);
	printf("Name: %s\t Age: %d\n", s4.name, s4.age);
	printf("Name: %s\t Age: %d\n", s5.name, s5.age); 
        
        s1 = grade(s1, 96, 0); 
	s1 = grade(s1, 94, 1);
	s2 = grade(s2, 50, 0); 
	s2 = grade(s2, 26, 1);
	s3 = grade(s2, 75, 0); 
	s3 = grade(s3, 51, 1);
	s4 = grade(s4, 80, 0); 
	s4 = grade(s4, 90, 1);
	s5 = grade(s5, 40, 0); 
	s5 = grade(s5, 60, 1);
        
        s1.average = calc_average(s1);
        s2.average = calc_average(s2);
	s3.average = calc_average(s3);
	s4.average = calc_average(s4);
	s5.average = calc_average(s5);

	printf("\n"); 
	printf("BILBO\n");
	printf("Grade 1: %d\n", s1.scores[0]);
	printf("Grade 2: %d\n", s1.scores[1]);
	printf("Average grade: %f\n", s1.average);

	printf("\n"); 
	printf("FRODO\n");
	printf("Grade 1: %d\n", s2.scores[0]);
	printf("Grade 2: %d\n", s2.scores[1]);
        printf("Average grade: %f\n", s2.average); 

	printf("\n"); 
	printf("SAMWISE\n");
	printf("Grade 1: %d\n", s3.scores[0]);
	printf("Grade 2: %d\n", s3.scores[1]); 
        printf("Average grade: %f\n", s3.average); 

	printf("\n"); 
        printf("PIPPIN\n");
	printf("Grade 1: %d\n", s4.scores[0]); 
	printf("Grade 2: %d\n", s4.scores[1]);
        printf("Average grade: %f\n", s4.average);

	printf("\n"); 
	printf("MERRY\n");
	printf("Grade 1: %d\n", s5.scores[0]);
	printf("Grade 2: %d\n", s5.scores[1]);
        printf("Average grade: %f\n", s5.average);

	printf("\n"); 

return 0; 

}
