#include <stdio.h>
/**
 * main - This program will assign a random number
 *
 *to the variable n each time it is executed.
 * Return: 0
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
	putchar(alph);
	alph++;
	if (alph == 'q' || alph == 'e')
	{
	alph++;
	}
	}

	putchar('\n');
	return (0);
}
