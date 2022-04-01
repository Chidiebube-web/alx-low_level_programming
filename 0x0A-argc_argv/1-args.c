#include <stdio.h>

/**
 * main - his prints the number of arguments
 * passed to it
 * @argc: integer
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
