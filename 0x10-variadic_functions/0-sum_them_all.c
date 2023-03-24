#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters of function
 * @n: number of arguments to sum
 *
 * descrpition: returns the sum of all parameters
 * return: value of sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == o)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
