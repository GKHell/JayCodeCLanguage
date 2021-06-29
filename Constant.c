
/*
	there are 2 ways to define constant .
	1 : const keyword (pure constant)
	2 : #define (weak constant) 
*/
#include<stdio.h>
// #include<conio.h>
int main()
{

	const int a=10; // constant
	// clrscr();
		
		a = 100;
		printf("value of a : %d\n", a);
	// getch();
}