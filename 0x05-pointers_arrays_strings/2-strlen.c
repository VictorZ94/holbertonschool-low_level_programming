#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - my own function calculate the length of a string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	do
	{
		i++;
	} while (s[i]);
	
return (i);
}
