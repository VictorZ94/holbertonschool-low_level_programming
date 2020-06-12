#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 122;

	while (alph >= 97)
	{
		putchar(alph);
		alph--;
	}

	putchar('\n');
	return (0);
}
