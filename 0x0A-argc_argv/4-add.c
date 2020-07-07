#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - arguments to main
 * @argc: first arg is a count
 * @argv: second arg is a pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[i][j])
		{
			if ((isdigit(argv[i][j]) == 0))
			{
				printf("error\n");
				return (1);
			}
		j++;
		}
	i++;
	}
	i = 1;

	while (argv[i] != argv[argc])
	{
		add += atoi(argv[i]);
		i++;
	}

	printf("%d\n", add);
return (0);
}
