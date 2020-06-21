#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print integer number with putchar.
 * @n: Argument int number
 *
 * Return: Always 0.
 */
void print_number(int n)
{

	/*
	 *if (n < 0)
	 *{
	 *_putchar('-');
	 *n = -n;
	 *}
	 *if (n / 10 != 0)
	 *print_number(n / 10);
	 *_putchar(n % 10 + '0');
	 **/
	char lastDigit;
	int reversed;
	char c;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = ('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		lastDigit = ((n % 10) + '0');
		n = n / 10;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n = n / 10;
	}
	while (reversed > 0)
	{
		c = ((reversed % 10) + '0');
		_putchar(c);
		reversed = reversed / 10;
	}
	_putchar(lastDigit);
}
