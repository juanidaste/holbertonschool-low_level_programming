#include<stdio.h>
/**
 * main - This program will assign a random number
 *
 *to the variable n each time it is executed.
 * Return: 0
 */

int main(void)

{
	char alph;
	int num;

	alph = 'a';
	num = 0;

	while (num < 10)
	{

		putchar(num + '0');
		num++;
	}

	while (alph <= 'f')
	{
	putchar(alph);
	alph++;
	}
	putchar('\n');
	return (0);
}
