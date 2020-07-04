#include <stdio.h>

/**
 * main - arguments to main
 * @argc: first arg is a count
 * @argv: second arg is a pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

return (0);
}
