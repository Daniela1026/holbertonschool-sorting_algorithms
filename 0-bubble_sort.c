#include "sort.h"

/**
* bubble_sort - function that sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: Character int
* @size: Character size_t
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t s = size;
	size_t sort_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	while (s > 0)
	{
		sort_n = 0;
		for (i = 0; i < s - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				sort_n = i + 1;
				print_array(array, size);
			}
		}
		s = sort_n;
	}
}
