
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter [start-end] : ");
	scanf("%d-%d",&start,&end);


	i = start;

	while(i<=end)
	{
		printf("Line %d\n",i);

		i+=10;
	}

	/*
		initilization

		while(condtion)
		{
				//code 

				increment/decrement
		}

	*/

}