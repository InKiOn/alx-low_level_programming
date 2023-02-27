#include "main.h"
#include <stdio.h>
/**
 * puts_half - void function
 * @n: int number of elements to print
 * @a: the arrays int type
 *
 * Description: print elements of an array of integers
 */

void puts_half(int *a, int n)
{

	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
