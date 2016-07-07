//Clarke Littlejohn
//inclass assignment
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
	int age;
	int scores[5];
	int avg;
	char name[100];
}student[5];

int average(int[],int);

int main(){
	srand(time(0));
	char userIn[100];
	int age;
	student test;
	int i;
	int j;
	//gets namesof students
	printf("Enter the name of the five students: ");
	for(i=0;i<5;i++){
		fgets(userIn,sizeof(userIn),stdin);
		userIn[strlen(userIn)-1]='\0';
		strcpy(test[i].name,userIn);
		
	}
	//gets age of students
	printf("Enter the age of the five students:\n");
	for(i=0;i<5;i++){
		printf("%s's Age: ",test[i].name);
		scanf("%d",&age);
		test[i].age=age;
	}
	//generates grade of students
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++)
		{	
			int k=(rand()%100+1);
			int l=rand()%2;
			if(l)
				k+=5;
			test[i].scores[j]=k;
		}
	}
	//gets average of students
	for(i=0;i<5;i++){
		test[i].avg=average(test[i].scores,(sizeof(test[i].scores)/4));
	}
	//output
	for(i=0;i<5;i++){
		printf("\nName: %s\tAge: %d\tTest Average: %d\n",test[i].name,test[i].age,test[i].avg);
	}
       return 0;
}

int average(int score[],int size){
	int i=0,avg=0;

	for(;i<size;i++){
		avg+=score[i];
	}
	return (avg/i);
}
			



















