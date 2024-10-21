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
char ALPH = 'A';
	while (alph <= 'z')
{
	putchar(alph);
	alph++;
}
	while (ALPH <= 'Z')
{
	putchar(ALPH);
	ALPH++;
}
	putchar('\n');
	return (0);
}
