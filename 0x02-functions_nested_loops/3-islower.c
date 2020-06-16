#include "holberton.h"

/**
 * _islower - verify if a letter pass is lowercase.
 * @c: argument can be dec, char, octal or hex of the ascii code
 *
 * Return: On success 1 otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 172)
	{
		return (1);
	}
return (0);
}
