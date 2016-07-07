#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int age;
	int scores[5];
} student;

int main()
{
	student s1 = {"Boogie", 16, {75, 80, 85, 90, 95}};
	student s2 = {"Richard Nixon", 103, {61, 57, 100, 89, 74}};
	student s3 = {"Fork on the Left", 4, {40, 80, 100, 95, 90}};
	student s4 = {"Caroline", 17, {93, 95, 96, 97, 100}};
	student s5 = {"Sylvanas Windrunner", 45, {84, 76, 98, 77, 65}};
	student store[5] = {s1, s2, s3, s4, s5};
	for (int i = 0; i < 5; i++)
	{
		float ave = (store[i].scores[0]+store[i].scores[1]+store[i].scores[2]+store[i].scores    [3]+store[i].scores[4])/ 5.0;
		printf("%s: %f\n", store[i].name, ave);
	}
	return 0;
}

