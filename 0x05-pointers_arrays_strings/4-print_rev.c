#include "main.h"

/**
 * _puts - void function
 * @str: string to be printed
 *
 * Description: prints a string followed by a new line
 */

void _puts(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n = i;
	}
	while (n >= 0)
	{
		_putchar(str[n]);
		n--;
	}
	_putchar('\n');
}
