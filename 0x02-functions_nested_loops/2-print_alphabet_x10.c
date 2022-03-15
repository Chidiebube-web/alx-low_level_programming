#include "main.h"

/**
 * print_alphabet_x10 - This function prints out 10 times the letters
 *
 * return:  void
 */
void print_alphabet_x10(void)
{
	char c;
	int d;

	d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}
