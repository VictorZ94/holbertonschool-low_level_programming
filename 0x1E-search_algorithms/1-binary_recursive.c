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
	int min, max;

	min = 0, max = size - 1;
	return (binarySearch(array, min, max, value));
}

/**
 * binarySearch - search sorting array by repeatedly dividing in half
 * @min: index lowest
 * @max: index highest
 * @value: matches with some value within array
 *
 * Return: index if value matches. Otherwise: -1
 *
 */
int binarySearch(int array[], int min, int max, int value)
{
		int i, j;

		if (max >= min)
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

			if (array[i] > value)
				return (binarySearch(array, min , i - 1, value));

			return (binarySearch(array, i + 1, max, value));
		}
		return (-1);
}
