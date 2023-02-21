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
	unsigned long a = 0, b = 1, sum;

	for (count = 1; count < 98; count++)
	{
		sum = a + b;

		a = b;
		b = sum;
	}

	printf("\n");
	return (0);
}
