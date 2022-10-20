include "main.h"
/**
 * print_alphabet - Prints lowercase of alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_puchar('\n');
}
