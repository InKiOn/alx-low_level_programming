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
	unsigned long a_p1, a_p2, b_p1, b_p2;
	unsigned long p1, p2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a_p1 = a / 10000000000;
	b_p1 = b / 10000000000;
	a_p2 = a % 10000000000;
	b_p2 = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		p1 = a_p1 + a_p1;
		p2 = a_p2 + b_p2;
		if (a_p2 + b_p2 > 9999999999)
		{
			p1 += 1;
			p2 %= 10000000000;
		}

		printf("%lu%lu", p1, p2);
		if (count != 98)
			printf(", ");

		a_p1 = b_p1;
		a_p2 = b_p2;
		b_p1 = p1;
		b_p2 = p2;
	}
	printf("\n");
	return (0);
}
