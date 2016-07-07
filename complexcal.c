/*Lloyd Page*/
/*Calculator for complex numbers*/
#include<stdio.h>
typedef struct
{
	int real;
	int fake;
}c;
c add(c,c);
c sub(c,c);
c div(c,c);
c mul(c,c);
int main()
{
	char operation;
	char handler[100];
	while(1)
	{
		printf("Select your operation: +,-,/,*\n");
		fgets(handler,sizeof(handler),stdin);
		if(sscanf(handler,"%c",&operation)&&(operation=='+'||operation=='-'||operation=='/'||operation=='*'))
			break;
		printf("invalid option\n");
	}
	c a;
	c b;
	c c;
	while(1)
	{
		printf("Enter the real part of your first number\n");
		fgets(handler,sizeof(handler),stdin);
		if(sscanf(handler,"%d",&a.real))
			break;
		printf("invalid input\n");
	}
	while(1)
	{
		printf("Enter the imaginary part of your first number\n");
		fgets(handler,sizeof(handler),stdin);
		if(sscanf(handler,"%d",&a.fake))
			break;
		printf("invalid input\n");
	}
	while(1)
	{
		printf("Enter the real part of your second number\n");
		fgets(handler,sizeof(handler),stdin);
		if(sscanf(handler,"%d",&b.real))
			break;
		printf("invalid input\n");
	}
	while(1)
	{
		printf("Enter the imaginary part of your second number\n");
		fgets(handler,sizeof(handler),stdin);
		if(sscanf(handler,"%d",&b.fake))
			break;
		printf("invalid input\n");
	}
	if(operation=='+')
		c=add(a,b);
	if(operation=='-')
		c=sub(a,b);
	if(operation=='/')
		c=div(a,b);
	if(operation=='*')
		c=mul(a,b);
	printf("%d%+di\n",c.real,c.fake);
	return 0;
}
c add(c a, c b)
{
	c c;
	c.real=a.real+b.real;
	c.fake=a.fake+b.fake;
	return c;
}
c sub(c a, c b)
{
	c c;
	c.real=a.real-b.real;
	c.fake=a.fake-b.fake;
	return c;
}
c div(c a, c b)
{
	c c;
	c.real=(a.real*b.real+a.fake*b.fake)/(b.real*b.real+b.fake*b.fake);
	return c;
}
c mul(c a, c b)
{
	c c;
	c.real=a.real*b.real-(a.fake*b.fake);
	c.fake=a.fake*b.real+a.real*b.fake;
	return c;

}
