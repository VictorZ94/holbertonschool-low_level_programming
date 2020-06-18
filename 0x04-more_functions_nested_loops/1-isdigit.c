#include "holberton.h"

/**
 * _isdigit - print verify if a character is upper or not
 * @c: Argument type char
 *
 * Return: On success 1 otherwise 0
 */

int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
