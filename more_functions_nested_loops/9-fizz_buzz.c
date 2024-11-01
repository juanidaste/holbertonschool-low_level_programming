#include <stdio.h>
#include "main.h"

void fizzbuzz (int num)
{
	int i;

	for(i = num; i <= 100; i++)
	{

		if(i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if(i % 3 == 0)
			printf("Fizz");

		else if(i % 5 == 0)
			printf("Buzz");

		else
		{
			printf("%d", i);
		}
		if (i <100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

int main(void)
{
	int j;

	j = 1;

	fizzbuzz(j);
	return (0);
}
