#include <stdio.h>
#include <stdlib.h>

/**
 * main - arguments to main
 * @argc: first arg is a count
 * @argv: second arg is a pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mult);
	}

return (0);
}
