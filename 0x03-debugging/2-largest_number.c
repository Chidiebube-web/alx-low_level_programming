#include "main.h"

/**
 * largest_number - THis prints the largest number
 * @a: Integer
 * @b: Integer
 * @c: Integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
