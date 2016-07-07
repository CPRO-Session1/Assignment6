#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
	char name[100];
	int age;
	int scores[5];
}student;


int main(){
	srand(time(0));
	student s1,s2,s3,s4,s5;

	strcpy(s1.name,"Anna");
	strcpy(s2.name,"Jane");
	strcpy(s3.name,"Kelly");
	strcpy(s4.name,"Tom");
	strcpy(s5.name,"Hellen");

	
	int studentsScore[5]={s1.scores,s2.scores,s3.scores,s4.scores,s5.scores};
	int j=0;
	while(j<=5){
	int i=0;
	int scores[5];
	while(i<=5){
		int r= rand();
		scores[i]=rand()%100;
		i++;
	}
	studentsScore[j]=scores[5];
	j++;
	continue;}

	printf("s1 name:\"%s\"/n",s1.name);
	printf("s1 scores:\"%d \"/n",s1.scores);
	printf("s2 name:\"%s\"/n",s2.name);
	printf("s2 scores:\"%d \"/n",s2.scores);
	printf("s3 name:\"%s\"/n",s3.name);
	printf("s3 scores:\"%d \"/n",s3.scores);
	printf("s4 name:\"%s\"/n",s4.name);
	printf("s4 scores:\"%d \"/n",s4.scores);
	printf("s5 name:\"%s\"/n",s5.name);
	printf("s5 scores:\"%d \"/n",s5.scores);
	return 0;
}

