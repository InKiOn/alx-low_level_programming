#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long a = 0, b = 1, fib;

	for (count = 0; count < 99: count++)
	{
		fib = a + b;
		printf("%lu", fib);

		a = b;
		b = fib;
		if (count != 98)
		{
			printf(", ");
		}
	}

	printf("\n");
	return (0);
}
