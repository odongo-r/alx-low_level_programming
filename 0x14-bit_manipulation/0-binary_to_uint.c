#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (r = 0; b[r]; r++)
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[r] - '0');
	}

	return (dec_val);
}

