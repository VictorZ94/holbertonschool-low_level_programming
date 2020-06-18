#include "holberton.h"

/**
 * _isupper - print verify if a character is upper or not
 * @c: Argument type char
 *
 * Return: On success 1 otherwise 0
 */

int _isupper(int c)
{
		/* if you want to print with octals is 0101 and 0132 */
		if (c >= 0x41 && c <= 0x5A)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
