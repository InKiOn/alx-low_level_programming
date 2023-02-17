/* library stdlib and time included */

#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints the alphabet lower case then upper case
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;
	char c;

	for (i = 97; i < 122; i++)
	{
		if (i != 113 || i != 101)
		{
			c = i;
			putchar(c);
		}
	}

	return (0);
}
