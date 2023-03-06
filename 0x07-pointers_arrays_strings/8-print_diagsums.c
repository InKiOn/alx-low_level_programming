#include <main.h>
#include <stdio.h>

/**
 * print_diagsums - Void function.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 * Description - prints sum of two diagonals of a square matrix of int
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum, sum2);
}
