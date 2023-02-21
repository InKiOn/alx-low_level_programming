#include "main.h"

/**
 * _islower - int function
 * @c: the parameter to be checked
 *
 * Definition: Checks wether a letter is lowercase or not
 *
 * Return: 1 if is lowercase 0 if not
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
