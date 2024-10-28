#include "main.h"
#include <stdio.h>

/**
 * _abs - funcion que retorna el valor absoluto
 * @num: numero para calcular valor absoluto
 * Return: retorna valor absoluto
 */

int _abs(int num)
{

	int abs;

	abs = num;

	if (num < 0)
	{

		abs = num * -1;
	}
	return (abs);
}
