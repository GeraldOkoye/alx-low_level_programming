#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function has 3 values
 * @array: target array
 * @size: array size
 * @action: fuction pointer to array
 *
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
