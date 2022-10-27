#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an uncovertable char
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	
	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
