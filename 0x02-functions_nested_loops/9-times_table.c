#include "holberton.h"

/**
 * times_table - print time table N° 9
 *
 */
void times_table(void)
{
	int m, n, z;

	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			z = m * n;
			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if ((n != 0) && (n <= 9))
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (n != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		n++;
		}
	_putchar('\n');
	m++;
	}
}
