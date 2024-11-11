#include <stdio.h>

/**
 * sum_diagonals - Entry of the program
 * @matrix: adsada
 * @s: asdadadad
 * @idx: asdadad
 * @sum1: fadadad
 * @sum2: asdadsad.
 */

void sum_diagonals(int *matrix, int s, int idx, int *sum1, int *sum2)
{
	if (idx >= s)
		return;

	*sum1 += *(matrix + idx * s + idx);
	*sum2 += *(matrix + idx * s + (s - 1 - idx));

	sum_diagonals(matrix, s, idx + 1, sum1, sum2);
}

/**
 * print_diagsums - Entry of the program
 * @a: adadad
 * @size: dasdadad
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int index;

	sum1 = 0;
	sum2 = 0;
	index = 0;

	sum_diagonals(a, size, index, &sum1, &sum2);
	printf("%d, %d\n", sum1, sum2);
}
