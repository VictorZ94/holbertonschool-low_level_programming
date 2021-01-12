#include "search_algos.h"

/**
 * linear_search - checks each element of the array
 * @array: list all the elements
 * @size: size of array or list
 * @value: matches with some value within array
 *
 * Return: index if value matches. Otherwise: -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
