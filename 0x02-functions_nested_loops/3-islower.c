#include "main.h"

/**
 * _islower - This checks for lowercase letters
 *
 * @c: character in ASCII format
 *
 * Return: 1 if lowercase else returns 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
