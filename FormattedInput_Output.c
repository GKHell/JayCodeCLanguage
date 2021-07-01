

#include<stdio.h>
// #include<conio.h>
void main()
{
		int i;
		char name[10];
	// clrscr();

		printf("Enter number : ");
		scanf("%d",&i);

		printf("Enter name : ");
		scanf("%s",name);

		printf("number - %d\t name - %s\n",i,name);
		printf("-------------------------\n");

		printf("Enter number and name : ");
		scanf("%d,%s",&i,name);
		printf("number - %d\t name - %s\n",i,name);
	


	// getch();
}