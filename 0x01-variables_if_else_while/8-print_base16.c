#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
