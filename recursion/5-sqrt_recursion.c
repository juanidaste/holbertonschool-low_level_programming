#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Entry of the program
 * _sqrt_recursion - iefeoife}
 * @n: eioejgmioe
 * Return: ijfwpom
 */

int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }

    return _sqrt_helper(n, 1);
}

int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess;
    }
    if (guess * guess > n)
    {
        return -1;
    }

    return _sqrt_helper(n, guess + 1);
}
