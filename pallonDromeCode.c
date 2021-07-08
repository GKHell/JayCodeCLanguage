
#include<stdio.h>
int main()
{
	int num,reverse = 0,rem;


	printf("Enter the number : ");
	scanf("%d",&num);

	while(num>0)
	{
		rem = num % 10;
		reverse = reverse*10+rem;
		num = num/10;
	}

	printf("reverse number : %d\n",reverse);
	
}

/*
	rem(=num%10)           reverse(=reverse*10 + rem)       num(= num/10) : 743
	3                      3                                74
	4                      34                               7
	7                      347                              0

	  input : 743
	reverse : 347


*/