#include "search_algos.h"

/**
 * jump_search - search sorting array jumping quater root of size
 * @array: list all the elements
 * @size: size of array or list
 * @value: matches with some value within array
 *
 * Return: index if value matches. Otherwise: -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t skip = 0, x = 0;

	if (array == NULL)
		return (-1);

	skip = sqrt(size);
	while (i < size)
	{
		if (array[i] >= value)
		{
			x = (i - sqrt(size)) + 1;
			printf("Value found between indexes [%lu] and [%lu]\n", x, i);
			while (x <= i)
			{
				printf("Value checked array[%ld] = [%d]\n", x, array[x]);
				if (array[x] == value)
					return (x);
				else if (x == i || array[x] > value)
					return (-1);
				x++;
			}
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = skip;
		skip = skip + sqrt(size);
	}
	x = (i - sqrt(size)) + 1;
	printf("Value found between indexes [%lu] and [%lu]\n", x, i);
	while (x < size)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		x++;
	}
	return (-1);
}
