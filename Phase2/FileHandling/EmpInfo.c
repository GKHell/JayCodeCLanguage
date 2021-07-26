
#include<stdlib.h>
#include<stdio.h>
FILE *fp;
char fileName[100];
struct Employee{

	int emp_id;
	char name[100];
	double salary;
}emp;

void getData()
{
	printf("Enter emp_id : ");
	scanf("%d",&emp.emp_id);

	printf("Enter name : ");
	scanf("%s",emp.name);
	 

	printf("Enter salary : ");
	scanf("%ld",&emp.salary);

	 
	printf("Enter fileName : ");
	scanf("%s",fileName);
	printf("0----------");
}

void storeInFile()
{
	fp = fopen(fileName,"w");

	fprintf(fp, "%4d | %10s | %ld\n",emp.emp_id,emp.name,emp.salary);
}

void main()
{

	getData();
	storeInFile();
}
