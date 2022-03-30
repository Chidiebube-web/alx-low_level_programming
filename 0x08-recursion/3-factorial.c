#include "main.h"

/**
 * factorial - This returns the factorial of
 * a given number
 * @n: number
 * Return:  -1 if lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
