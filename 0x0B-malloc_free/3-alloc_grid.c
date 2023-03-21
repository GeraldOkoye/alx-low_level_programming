#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create pointer to a 2d array of ints
 *
 * @height: height or row
 * @width: witdth or column
 *
 * Return: 2d array or NULL if failed to allocate memory
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int arr_len = width * height;

	/* length of width/height = 0 or negative */
	if (arr_len <= 0)
		return (NULL);

	/* allocate memory for row in array */
	array = (int **)malloc((height) * sizeof(int *));

	/* set terminating condition if malloc fails */
	if (array == NULL)
		return (NULL);

	/* allocate memory for column in array */
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc((width) * sizeof(int));
		{
			if (array[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(array[i]);
				free(array);
				return (NULL);
			}
		}
	}
	/* access array items */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
