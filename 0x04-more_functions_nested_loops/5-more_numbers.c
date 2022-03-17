#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		if (ch >= 10)
			_putchar((ch / 10) + 48);
		_putchar((ch % 10) + 48);
	}
	_putchar('\n');
}
