#include <stdio.h>
/**
 * main-prints number 01 to 89
 * Return: 0
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
		}
		if (n == 1)
		{
			printf("%ld \n", f);
		}
		f++;
	}
		return (0);
}
