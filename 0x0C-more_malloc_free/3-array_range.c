#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - to create an array of intergers
 * should contain all min to max values ordered from min to max
 * @min: min range of values
 * @max: max range of values
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	/* min values less than max values */
	if (min > max)
		return (NULL);

	/* set size of array */
	size = max - min + 1;

	/* allocate memory to array */
	arr = malloc(sizeof(int) * size);

	/* set terminating conditions */
	if (arr == NULL)
		return (NULL);

	/* access array items */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
