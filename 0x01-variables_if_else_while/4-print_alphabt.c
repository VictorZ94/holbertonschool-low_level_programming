#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	alph++;
	}

	putchar('\n');
	return (0);
}
