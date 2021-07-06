
#include<stdio.h>
int main()
{
	int choice;

	printf("Enter day code [1-7] : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("Monday\n");
		case 2:printf("Tuesday\n");
		case 3:printf("Wednesday\n");
		case 4:printf("Thursday\n");
		case 5:printf("Friday\n");
		case 6:printf("saturday\n");
		case 7:printf("Sunday\n");
	}
}