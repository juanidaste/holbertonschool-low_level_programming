#include<stdio.h>
/**
 * main - This program will assign a random number
 *
 *to the variable n each time it is executed.
 * Return: 0
 */

int main(void)
{
	char alphr;

	alphr = 'z';

	while (alphr >= 'a')
	{
		putchar(alphr);
		alphr--;
	}
	putchar('\n');
	return (0);
}
