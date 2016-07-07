#include <stdio.h>
#include <string.h>



typedef struct {
	char name[100];
	int age;
	int scores[5];
} student;

int avg(student s){
	int i;
	int total;
	total = 0;
	for (i=0;i<5;i++){
		total = total + s.scores[i];
	}
	total = total/5;
	return total;

}
int main() {
	
int n;

	student st1={"Peter", 17, {96, 94, 95, 39, 94}};
        student st2={"Caleb", 17, {38, 94, 1, 1, 1}};
        student st3={"Alex", 20, {99, 99 ,99, 99, 99}};
        student st4={"Justin", 5, {6, 6, 6, 6, 666}};
        student st5={"Andrew", 29, {93, 38, 94, 83, 92}};

	student studentArray[] = {st1, st2, st3, st4, st5};

int arr[5];

	arr[0] = avg(studentArray[0]);
	arr[1] = avg(studentArray[1]);
	arr[2] = avg(studentArray[2]);
	arr[3] = avg(studentArray[3]);
	arr[4] = avg(studentArray[4]);

	printf("Choose the number of a student to print his average.\n");
	scanf("%d", &n);
	printf("The average of student #%d is %d.\n",n ,arr[n]);

}
