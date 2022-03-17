#include "main.h"

/**
 * print_line - This prints a line
 * @n: The number of times _ occurs
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
