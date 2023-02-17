/* library stdlib and time included */

#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints all numbers in base 16
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10 )
		{
			putchar('0' + i);
		} else
		{
			putchar('a' + i);
		}
	}

	putchar('\n');

	return (0);
}
