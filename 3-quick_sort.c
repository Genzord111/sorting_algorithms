#include <stdlib.h>
#include "sort.h"

/**
 * swap - function to swap positions of elements
 * @a: element greater than pivot
 * @b: element less than pivot
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quick_sort - sorts array using quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursively applies sorting to the partitions
 * @array: array of integers
 * @low: the index of the first position value in a partition
 * @high: the index of the last element in a partition
 * @size: the size of the array
 * Return: void
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - uses the Lomuto partition scheme to partition
 * @array: array of integers
 * @low: the index of the first position value in a partition
 * @high: the index of the last element in a partition
 * @size: the size of the array
 * Return: void
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}
