#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: The char to be printed
 * Return: On success 1
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
