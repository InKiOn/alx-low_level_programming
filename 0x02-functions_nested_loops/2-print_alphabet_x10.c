#include "main.h"

/**
 * print_alphabet_x10 - void function
 *
 * Definition: Prints the alphabet in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
