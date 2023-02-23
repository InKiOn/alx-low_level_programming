#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Description: Prints an integer
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar(0);
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((unsigned int)n % 10 + '0');
}
