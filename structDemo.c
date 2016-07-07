#include <stdio.h>
#include <string.h>


typedef struct {
	char name[100];
	int age;
	int scores[5];
} student;

int average(student list){
	int i;
	int total;
	total = 0;
	for (i=0;i<5;i++)
	{
	total = total + list.scores[i];
	}
	total = total/5;
	return total;
}


int main(){
	int i;
	student st1={"Peter",17, {86,12,84,96,55}};
	student st2={"Caleb",17,{5,46,79,17,77}};
	student st3={"Alex",20,{55,66,77,88,99}};
	student st4={"Justin",16,{46,44,33,22,11}};
	student st5={"Andrew",16,{73,46,90,15,49}};

	student studentArray[]={st1,st2,st3,st4,st5};	

	int arr[5];
	arr[0]=average(studentArray[0]);
	arr[1]=average(studentArray[1]);
	arr[2]=average(studentArray[2]);
	arr[3]=average(studentArray[3]);
	arr[4]=average(studentArray[4]);
	for (i=0;i<5;i++)
	{
	printf("The average of the scores was: %d\n",arr[i]);
	}
}


