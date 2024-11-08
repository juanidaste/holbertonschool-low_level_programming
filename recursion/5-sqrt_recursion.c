#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Entry of the program
 * _sqrt_recursion - iefeoife}
 * @n: eioejgmioe
 * Return: ijfwpom
 * @g: dfwfw
 */

int _sqrt_helper(int n, int g);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Entry of the program
 * _sqrt_helper - wfferr
 * @n: fwewfw
 * @g: fwfwf
 * Return: cwfew
 */

int _sqrt_helper(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	if (g * g > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, g + 1));
}
