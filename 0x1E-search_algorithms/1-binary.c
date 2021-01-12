#include "search_algos.h"

/**
 * binary_search - search sorting array by repeatedly dividing in half
 * @array: list all the elements
 * @size: size of array or list
 * @value: matches with some value within array
 *
 * Return: index if value matches. Otherwise: -1
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max, i, j;

	min = 0;
	i = 0;
	max = size - 1;
	while (min <= max)
	{
		j = min;
		printf("Searching in array: ");
		while (j <= max)
		{
			printf("%d", array[j]);
			if (j + 1 <= max)
				printf(", ");
			j++;
		}
		printf("\n");

		i = ((max + min) / 2);
		if (array[i] == value)
			return (i);

		if (array[i] < value)
			min = i + 1;
		else
			max = i - 1;
	}
	return (-1);
}
