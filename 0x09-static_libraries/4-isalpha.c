#include "main.h"

/**
 * _isalpha - This function checks for alphabetic characters
 *
 * @c: ASCII characters
 *
 * Return: 1 if true else 0 if false
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
