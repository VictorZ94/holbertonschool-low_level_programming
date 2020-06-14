#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int div, mod, aux;

	while (num < 100)
	{
		div = num / 10;
		mod = num % 10;
		aux = mod * 10 + div;

		if (num != aux && num < aux)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');

			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	num++;
	}

	putchar('\n');
	return (0);
}
