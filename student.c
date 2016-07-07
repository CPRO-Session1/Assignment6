#include<stdio.h>
#include<string.h>

typedef struct {
	char name[100];
	int age;
	int scores[5];
	  
} stud;

float average (int score[5])
{
	int sum=score[0]+score[1]+score[2]+score[3]+score[4];
	float average = sum/5;
	return average;
}

int main()
{
	stud st[5];
	strcpy(st[0].name,"Nicki");
	strcpy(st[1].name,"Paul");
	strcpy(st[2].name,"Sydney");
	strcpy(st[3].name,"Sean");
	strcpy(st[4].name,"Anjali");
	st[0].age=14;
	st[1].age=19;
	st[2].age=16;
	st[3].age=11;
	st[4].age=3;
	int st1sco[5]={100,92,36,74,58};
	int st2sco[5]={60,32,78,98,22};
	int st3sco[5]={76,29,40,81,69};
	int st4sco[5]={84,10,29,48,79};
	int st5sco[5]={92,84,71,67,13};
	int g;
	for (g=0;g<5;g++){
		st[0].scores[g]=st1sco[g];
		st[1].scores[g]=st2sco[g];
		st[2].scores[g]=st3sco[g];
		st[3].scores[g]=st4sco[g];
		st[4].scores[g]=st5sco[g];
	}
	int h,i,j;
	float avg[5];
	for (h=0;h<5;h++){
		avg[h]=average(st[h].scores);
	}
	for (i=0;i<5;i++){
		printf("Name: %s\n",st[i].name);
		printf("Age: %2d\n",st[i].age);
		printf("Grades: ");
		for(j=0;j<5;j++)
		{
			printf("%d ", st[i].scores[j]);
		}
		printf("\n");
		printf("Average of grades: %4.2f\n", avg[i]);
	}
	return 0;
}

