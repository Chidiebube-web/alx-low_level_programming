#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character to the stdout
 * @c: Returns the character to print
 * Return: 1 on success
 * -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
