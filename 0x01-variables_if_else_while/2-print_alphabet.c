/* library stdlib and time included */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints the alphabet lower case
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;
	char c;

	for (i = 97; i < 122; i++)
	{
		c = i;
		putchar(c);
	}

	return (0);
}
