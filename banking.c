/*Lloyd Page*/
/*banking accounts represtend by structures, user input for making accounts, naming them, and transactions, print all transactions, repeatable*/
#include<stdio.h>
#include<string.h>
typedef struct
{
	int account;
	float balance;
	char name[100];
} bank;
float deposit(float,float);
float withdraw(float,float);
int main()
{
	char z;
	do
	{
		int size;
		char handler[100];
		while(1)
		{
			printf("Enter the number of accounts\n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&size))
				break;
			printf("Invalid input\n");
		}
		bank b[size];
		for(int i=0;i<size;i++)
		{
			b[i].account=i;
			printf("Enter your name\n");
			fgets(b[i].name, sizeof(b[i].name),stdin);
			b[i].name[strlen(b[i].name)-1]='\0';
			while(1)
			{
				char y;
				printf("Deposit money?(y/n)\n");
				y=getchar();
				fgets(handler,sizeof(handler),stdin);
				if(y=='y'||y=='Y')
				{
					float dep;
					while(1)
					{
						printf("Enter the amount\n");
						fgets(handler,sizeof(handler),stdin);
						if(sscanf(handler,"%f",&dep))
							break;
						printf("Invalid input\n");
					}
					b[i].balance=deposit(b[i].balance,dep);
					printf("accout: %d\tname: %s\tbalance: %.2f\n",b[i].account,b[i].name,b[i].balance);
				}
				printf("Withdraw  money?(y/n)\n");
				y=getchar();
				fgets(handler,sizeof(handler),stdin);
				if(y=='y'||y=='Y')
				{
					float draw;
					while(1)
					{
						printf("Enter the amount\n");
						fgets(handler,sizeof(handler),stdin);
						if(sscanf(handler,"%f",&draw)&&(withdraw(b[i].balance,draw)>=0.0))
								break;
						printf("Invalid input\n");
					}
					b[i].balance=withdraw(b[i].balance,draw);
				}
				printf("accout: %d\tname: %s\tbalance: %.2f\n",b[i].account,b[i].name,b[i].balance);
				printf("Any more actions with this account?(y/n)\n");
				y=getchar();
				fgets(handler,sizeof(handler),stdin);
				if(y=='n'||y=='N')
					break;
			}//end of while loop for an account
		}//end of for loop for bank
		for(int i=0;i<size;i++)
			printf("accout: %d\tname: %s\tbalance: %.2f\n",b[i].account,b[i].name,b[i].balance);
		printf("Run again?(y/n)\n");
		z=getchar();
		fgets(handler,sizeof(handler),stdin);
	}while(z=='y'||z=='Y');
	return 0;
}
float deposit(float a, float b)
{
	a+=b;
	return a;
}
float withdraw(float a, float b)
{
	a=a-b;
	return a;
}
