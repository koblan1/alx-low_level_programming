#include <stdio.h>
#include "main.h"

/**
 * *_memset - main function.
 * @s: Pointer to the buffer.
 * @b: The constant byte.
 * @n: Size of buffer to fill.
 *
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
