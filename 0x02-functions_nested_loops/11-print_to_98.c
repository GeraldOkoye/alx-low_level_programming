#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * printing should be in order
 * last number to be printed should be 98
 * first number should be any number passed to the fuction
 * standard library can be used
 *
 * @n: number to be tested
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
