#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor
 *
 * Return: 0 on success
 */

int main(void)
{
	long int i, num;

	num = 612852475143;

	while (num % 2 == 0)
	{
		printf("%d", 2);
		num = num / 2;
	}
	for (i = 3; i < sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			printf("%d", i);
			num = num / i;
		}
	}

	printf("%d", num);

	return (0);
}
