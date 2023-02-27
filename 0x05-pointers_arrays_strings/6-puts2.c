#include "main.h"

/**
 * puts2- void function
 * @str: variable to be printed
 *
 * Description - print every other character of a string
 */

void puts2(char *str)
{
	int i;

	if (s[0] == '\0')
	{
		s[1] = '\0';
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (i % 2 == 0)
			{
				_putchar(s[i]);
			}
		}
		_putchar('\n');
	}
}
