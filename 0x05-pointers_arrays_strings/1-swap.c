#include "main.h"

/**
 * swap_int - This swaps two numbers
 * @a: First int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
