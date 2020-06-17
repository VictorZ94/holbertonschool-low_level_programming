#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers until 98.
 * @n: argument value
 * Return: Always 0.
 */
void print_to_98(int n)
{
		while (n < 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
putchar('\n');
}
