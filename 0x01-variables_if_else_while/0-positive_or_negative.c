/* library stdlib and time included */

#include <stdlib.h>
#include <time.h>

/**
 * main -function
 *
 * Description: prints a random number
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n == 0)
	{
		printf("0 is zero");
	} else
	{
		printf("%d is positive");
	}

	return (0);
}
