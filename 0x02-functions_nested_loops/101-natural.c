#include <stdio.h>

/**
 * main - start function
 * 
 * Description:  Lists all natural numbers below 1024 (excluded) that are multiples of 3 or 5.
 * 
 * Return: 0 on success
 */

int main(void)
{
	int i, sum;
	
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		printf("%d\n", sum);
		return (0);
	}
}
