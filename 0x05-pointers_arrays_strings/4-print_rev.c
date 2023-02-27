#include "main.h"

/**
 * print_rev - void function
 * @s: string to be reversed
 *
 * Description: prints a reversed string followed by a new line
 */

void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = i;
	}
	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
