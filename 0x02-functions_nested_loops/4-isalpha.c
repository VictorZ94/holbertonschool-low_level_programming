#include "holberton.h"

/**
 * _isalpha - verify if a character passed is lowercase or uppercase.
 * @c: argument can be dec, char, octal or hex of the ascii code
 *
 * Return: On success 1 otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 172) || (c >= 65 && c <= 90))
	{
		return (1);
	}
return (0);
}
