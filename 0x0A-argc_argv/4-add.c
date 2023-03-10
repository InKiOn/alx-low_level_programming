#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints sum of numbers
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 If two arguments else 1.
 */

int main(int argc, char *argv[])
{
	int count, result;
	int i;

	if (argc <= 0)
	{
		printf("0\n");
	}
	for (count = 1; count <= argc; count++)
	{
		for (i = 0; i <= argc; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[count]);
	}
	printf("%d\n", result);

	return (0);
}
