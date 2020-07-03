#include "holberton.h"

/*
 * is_palindrome - String palindrome
 * @s: String to compare
 *
 * Return: 1 on true or 0 is false
 */
int is_palindrome(char *s)
{
	int length;
	length = _strlen_recursion(s) - 1;

	return (find_palindrome(s, 0, length));
}

/*
 * find_palindrome - to find palindrome
 * @s: String to compare
 * @start: bigan
 * @end: end
 * Return: 1 on true or 0 is false
 */
int find_palindrome(char *s, int start, int end)
{
	if  (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	else
		return (find_palindrome(s, start + 1, end - 1));
}
