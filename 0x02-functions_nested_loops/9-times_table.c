#include "main.h"

/**
 * times_table - void function
 *
 * Definition: Prints Times table of 9 *
 *
 */

void times_table(void)
{
	int r, c, multiple;

	for (r = 0; r <= 10; r++)
	{
		_putchar('0');
		for (c = 1; j <= 9; j++)
		{
			multiple = r * c;

			_putchar(',');
			_putchar(' ');

			if (multiple <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multiple / 10) + '0');
			}

			_putchar((multiple % 10) + '0');
		}
		_putcahr('\n');
	}
}
