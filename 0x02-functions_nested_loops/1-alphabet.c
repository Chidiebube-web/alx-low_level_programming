#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabets in small letters
 * Return: 0 success
 */
void print_alphabet(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
		_putchar (sl);
		_putchar ('\n');
}
