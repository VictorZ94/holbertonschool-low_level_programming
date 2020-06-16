#include "holberton.h"

/**
 * _abs - return the value absolute of a number
 * @abs: argument value positive or negative
 *
 * Return: if negative come back positive number
 */
int _abs(int abs)
{
	if (abs >= 0)
	{
		return (abs);
	}

return (abs * -1);
}
