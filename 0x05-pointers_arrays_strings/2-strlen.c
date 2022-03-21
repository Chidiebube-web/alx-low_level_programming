#include "main.h"

/**
 * _strlen - This prints the length of the string
 * @s: The string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
