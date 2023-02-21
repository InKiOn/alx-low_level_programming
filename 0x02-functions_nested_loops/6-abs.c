#include "main.h"

/**
 * _abs - int function
 * @n: the parameter to be checked
 *
 * Definition: Prints the absolute value of an integer
 *
 * Return: the numbers value
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
}
