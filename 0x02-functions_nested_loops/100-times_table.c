#include "main.h"

/**
 * print_times_table - void function
 * @n: number of times table
 *
 * Definition: Prints Times table of n starting with 0
 *
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return (0);
	}
	else 
	{
		int r, c, multiple;
		
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
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
			_putchar('\n');
		}
	}
}
