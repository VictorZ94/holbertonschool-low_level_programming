#include "holberton.h"

/**
 * leet - Modify charaters by numbers.
 * @s: Argument pointer to char
 *
 * Return: Pointer to char.
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = {'A', 'E', '0', 'T', 'L'};
	char s2[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s[i] == s1[j] ||  s[i] == s2[j])
				s[i] = leet[j];

		j++;
		}
	i++;
	}
return (s);
}
