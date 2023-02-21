#include "main.h"

/**
 * print_alphabet - void function
 *
 * Definition: Prints the alphabet in lowercase_putchar
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
