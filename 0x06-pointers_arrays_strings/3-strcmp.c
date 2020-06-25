#include "holberton.h"

/**
 * _strcmp - compare two string
 * @s1: Argument pointer to char
 * @s2: Argument pointer to char
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		else if (s1[i] == s2[i])
			return (s1[i] - s2[i]);

		else
			return (s2[i] - s1[i]);
	i++;
	}
return (0);
}
