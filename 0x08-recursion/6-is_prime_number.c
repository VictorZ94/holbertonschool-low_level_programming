#include "holberton.h"

/**
 * is_prime_number - function test if a natural number is prime
 * @n: natural number to test
 *
 * Return: 1 on true, otherwise 0
 */
int is_prime_number(int n)
{
	int prime = n;

	if (prime == 1) /* 1 is not prime number and is not composite number */
		return (0);

	if (prime < 1) /* prime are natural numbers, no negative numbers */
		return (0);

	return (find_prime(prime, n - 1));
}

/**
 * find_prime - function going resting and testing every number
 * @prime: natural number
 * @n: value to going futher test.
 *
 * Return: 1 on true, otherwise 0
 */
int find_prime(int prime, int n)
{
	if (n == 1)
		return (1);

	if (((prime % n) == 0) && n != 1)
		return (0);

	return (find_prime(prime, n - 1));
}
