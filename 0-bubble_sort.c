#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort algorithm
 * @array: Pointer to array
 * @size: size of array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t current;
	int temp;
	bool swapped = true;

	if (size < 2)
		return;

	while (swapped)
	{
		swapped = false;
		for (current = 0; current < size - 1; current++)
		{
			if (array[current] > array[current + 1])
			{
				temp = array[current];
				array[current] = array[current + 1];
				array[current + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
	}
}
