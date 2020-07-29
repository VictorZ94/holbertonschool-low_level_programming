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

	long int next, first = 0, second = 1;

	while (--n)
	{

		next = first + second;
		first = second;
		second = next;

		printf("%ld", next);
		if (n > 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
