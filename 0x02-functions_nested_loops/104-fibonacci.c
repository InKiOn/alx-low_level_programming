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
	
	for (count = 0; count < 98; count++)
	{
		if (count <= 1)
		{
			fib = count;
		}
		else if (count == 93)
		{
			unsigned long long a1 = 0, b1 = 1, fib1;
			unsigned long long a2 = 0, b2 = 1, fib2;
			int i;
			
			for (i = 2; i <= count; i++)
			{
				fib1 = a1 + b1;
				a1 = b1;
				b1 = fib1;
				
				fib2 = a2 + b2;
				a2 = b2;
				b2 = fib2;

				if (fib2 / 10000000000 > 0)
				{
					fib1 += fib2 / 10000000000;
					fib2 %= 10000000000;
				}
			}
			printf("%llu%010llu", fib1, fib2);
			continue;
		}
		else
		{
			fib = a + b;
			a = b;
			b = fib;
		}
		printf("%lu", fib);
		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
