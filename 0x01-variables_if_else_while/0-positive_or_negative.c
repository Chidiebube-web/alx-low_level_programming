#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This prints out the required answers without errors
 *
 * Return: 09 This should be returned without errors
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
