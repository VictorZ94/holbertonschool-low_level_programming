#include "holberton.h"

/**
 * binary_to_uint - function to convert binary to decimal base.
 * @b: char number binary base.
 *
 * Return: number converted to decimal base.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (*b == '\0')
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		decimal = decimal << 1; /* Operator left shift */
		if (*b == '1')
			decimal = decimal ^ 1; /* Operator XOR */

	b++;
	}
return (decimal);
}
