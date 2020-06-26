#include "holberton.h"

/**
 * string_toupper - Chage characters lowercase to uppercase
 * @s: Argument pointer to char
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	i++;
	}

return (s);
}
