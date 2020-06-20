#include <stdio.h>
/**
 * main - prints largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int f = 2;

	while (n != 1)
	{
		if (n % f == 0)
		{
			n = n / f;
			if (n == 1)
			{
			printf("%ld \n", f);
			}
			f = 1;
		}
		f++;
	}
		return (0);
}
