#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry of the program
 * factorial - eegegeg
 * @n: nashe
 * Return: adsad
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
