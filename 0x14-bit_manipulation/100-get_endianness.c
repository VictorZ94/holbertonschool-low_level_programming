#include "holberton.h"
/**
 * get_endianness - little code endian
 *
 * Return: Always 0.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
