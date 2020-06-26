#include "holberton.h"
#include <stdio.h>

/**
 * leet - Modify charaters by numbers.
 * @s: Argument pointer to char
 *
 * Return: Pointer to char.
 */
char *leet(char *s)
{
	int i;
	char leet[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = leet[0];

		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = leet[1];

		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = leet[2];

		else if (s[i] == 't' || s[i] == 'T')
			s[i] = leet[3];

		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = leet[4];

	i++;
	}
return (s);
}
