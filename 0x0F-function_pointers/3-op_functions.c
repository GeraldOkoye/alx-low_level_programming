#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function with two arguments
 * @a: int type
 * @b: int type
 *
 * description: add two inputs
 * return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - functions with two arguments
 * @a: int type
 * @b: int type
 *
 * description: subtract two inputs
 * return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - functions with two arguments
 * @a: int type
 * @b: int type
 *
 * description: multiply two inputs
 * return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function with two arguments
 * @a: int type
 * @b: int type
 *
 * description: divide two inputs
 * return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function with two arguments
 * @a: int type
 * @b: int type
 *
 * description: mod two input
 * return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
