#include <stdio.h>

/**
 * main - Enter point.
 * fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 50;
	unsigned long int next, first = 0, second = 1;

	while (n--)
	{
		next = first + second;
		first = second;
		second = next;

		printf("%ld", next);
		if (n > 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
