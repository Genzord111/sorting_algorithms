#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts array using selection sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t pos;

	if (size < 2)
		return;

	for (pos = 0; pos < size - 1; pos++)
	{
		size_t min;
		size_t rem = pos + 1;

		min = rem;
		temp = array[pos];

		for (; rem < size; rem++)
		{

			if (array[rem] < array[min])
			{
				min = rem;
			}
		}
		if (array[pos] > array[min])
		{
			array[pos] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
