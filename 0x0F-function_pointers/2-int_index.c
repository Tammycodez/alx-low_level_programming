#include "function_pointers.h"

/**
 * int_index - A function that searches for integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function call
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
