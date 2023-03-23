#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function with 3 arguments
 * @array: target array holding integers
 * @size: array size
 * @cmp: function pointer to compare search integer term
 *
 *description: searches for an interger
 * return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}

