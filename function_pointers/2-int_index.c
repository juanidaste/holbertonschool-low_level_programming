#include "function_pointers.h"

/**
 * int_index - adadadada
 * @array: asdadadada
 * @size: dadadadad
 * @cmp: adadadadad
 * Return: adadada
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }

    return (-1);
}

