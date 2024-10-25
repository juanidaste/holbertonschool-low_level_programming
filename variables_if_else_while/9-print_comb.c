#include<stdio.h>
/**
 * main - This program will assign a random number
 *
 *to the variable n each time it is executed.
 * Return: 0
 */

int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
{
	putchar(num + '0');
	if (num != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
