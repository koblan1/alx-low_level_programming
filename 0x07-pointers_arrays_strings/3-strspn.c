#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, c, p = 0;

	while (s[i])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				p++;
			}
		}
		if (p < i)
		{
			break;
		}
		i++;
	}
	return (p);
}
