#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - Entry of the progra
 *_strlen_recursion - nninwfw
 *@s: adqqq
 *Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
		_strlen_recursion(s + 1) + 1);
}
