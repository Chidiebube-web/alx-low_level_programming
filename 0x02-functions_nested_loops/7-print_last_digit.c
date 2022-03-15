#include "main.h"

/**
 * print_last_digit - This prints the last digit of a number
 *
 * @i: integer
 *
 * Return: This returns the value
 */
int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
