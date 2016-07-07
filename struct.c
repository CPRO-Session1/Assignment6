/*Lloyd Page*/
/*5 student structues in an array, repeatable*/
#include<stdio.h>
typedef struct
{
	char name[100];
	int age;
	int scores[5];
}student;
int main()
{
	char y;
	do
	{
		int size;
		char handler[100];
		while(1)
		{
			printf("Enter a group size\n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&size))
				break;
			printf("Enter a valid input\n");
		}/*Santizes input for size*/
		student group[size];
		for(int i=0;i<size;i++)
		{
			printf("Enter student%d's name\n",i+1);
			fgets(group[i].name,sizeof(group[i].name),stdin);
			while(1)
			{
				printf("Enter student%d's age\n",i+1);
				fgets(handler,sizeof(handler),stdin);
				if(sscanf(handler,"%d",&group[i].age))
					break;
				printf("Enter a valid input\n");
			}
			for(int j=0;j<sizeof(group[i].scores)/4;j++)
			{
				while(1)
				{
					printf("Enter a student%d's grade for test%d\n",i+1,j+1);
					fgets(handler,sizeof(handler),stdin);
					if(sscanf(handler,"%d",&group[i].scores[j]))
						break;
					printf("Enter a valid number\n");
				}
			}
		}
		for(int i=0;i<size;i++)
		{
			float avg=0;
			for(int j=0;j<sizeof(group[i].scores)/4;j++)
			{
				avg+=group[i].scores[j];
			}
			avg=avg/((float)(sizeof(group[i].scores))/4);
			printf("Name: %s Age: %d Average score: %g\n",group[i].name,group[i].age,avg);
		}
	printf("Run again?(y/n)");
	y=getchar();
	fgets(handler,sizeof(handler),stdin);
	}while(y=='y'||y=='Y');
	return 0;
}
