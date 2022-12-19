#include "main.h"
#include <stdio.h>

/**
 * print_array - main function.
 * @a: Pointer, the array to print.
 * @n: The array lenght
 *
 * Description: This function prints elements of an array of integers
 *
 * Return:no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
