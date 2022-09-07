#include "sort.h"

/**
* selection_sort - function that sorts an array of integers in ascending
* order using the Selection sort algorithm
* @array: Character int
* @size: Character size_t
*/
void selection_sort(int *array, size_t size)
{
	size_t i, n, index;
	int min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		index = i;
		for (n = i + 1; n < size; n++)
		{
			if (array[n] < min)
			{
				min = array[n];
				index = n;
			}
		}
		if (index != i)
		{
			sorts_array(array + i, array + index);
			print_array((const int *)array, size);
		}
	}
}

/**
 * sorts_array - function that swaps two integers
 * @a: Character int
 * @b: Character int
 */
void sorts_array(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
