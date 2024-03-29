#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function with two arguments
 * @separator: char type pointer
 * @n: unsigned int type const
 *
 * description: prints numbers, followed by a new line
 * return: na
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
