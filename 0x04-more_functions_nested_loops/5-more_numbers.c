#include "main.h"

/**
 * more_numbers - void function
 *
 * Definition: Prints numbers 0 to 14 10 times
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
