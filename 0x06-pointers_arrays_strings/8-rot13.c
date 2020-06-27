#include "holberton.h"

/**
 * rot13 - Modify charaters every 13 positions.
 * @s: Argument pointer to char
 *
 * Return: Pointer to char.
 */
char *rot13(char *s)
{
	char str[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char root13[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (str[j])
		{
			if (s[i] == str[j])
			{
				s[i] = root13[j];
				break;
			}

		j++;
		}
	i++;
	}
return (s);
}
