#include<stdio.h>
/**
 * main - This program will assign a random number
 *
 *to the variable n each time it is executed.
 * Return: 0
 */

int main(void)
{
	int unoalnueve;

	unoalnueve = 0;

	while (unoalnueve <= 9)
{
	putchar(unoalnueve + '0');
}
	putchar('\n');
	return (0);
}
