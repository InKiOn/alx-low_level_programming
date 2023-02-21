#include "main.h"

/**
 * main - Start function
 *
 * Definition: Prints _putchar
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	int i;
	char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
