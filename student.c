#include <stdio.h>
#include <string.h>
/*Jack Rosen. The purpose is to find the average test score of 5 people using structures and functions. */
typedef struct {
	char name[100];
	int age;
	int scores[5];
} student;
int main()
{
	int average;
	student st[5];
	student  s = {"Jack", 15, {}}, r = {"Oscar", 17, {}}, d = {"Eli", 19, {}}, e = {"Emma", 12, {}}, g = {"Bob", 20, {}};
	st[0] = s;
	st[1] = r;
	st[2] = d;
	st[3] = e;
	st[4] = g;
	for (int i = 0; i <= 4; i++)
	{
		printf("What do you want %s's 5 test scores to be?\n", st[i].name);
		for (int j = 0; j <= 4; j++)
		{
			scanf("%d", &st[i].scores[j]);
		}
	}
	for (int i = 0; i <= 4; i++)
	{
		average = 0;
		for (int j = 0; j <= 4; j++)
		{
			average += st[i].scores[j];
		}
		average /= 5;
		printf("The average of %s's scores was %d%%\n", st[i].name, average);
	}
	return 0;
	
}
