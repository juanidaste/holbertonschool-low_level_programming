#include<stdio.h>
#include "main.h"

/**
 * _pow_recursion - Entry of the program
 * _pow_recursion - wijinf
 * @x: eifef
 * @y: cinicnio
 * Return: mdk
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
