#include "holberton.h"

/**
 * _isupper - print verify if a character is upper or not
 *
 * Return: On success 1 otherwise 0
 */

int _isupper(int c)
{
		if (c >= 0x41 && c <= 0x5A) /* if you want to print with octals is 0101 and 0132 */
		{
				return (1);
		}
		else
		{
				return (0);
		}
}
