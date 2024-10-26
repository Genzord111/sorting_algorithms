#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/*
 * bubble_sort - sorts an array using bubble sort algorithm
 * @array: Pointer to array
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
    size_t i;
    int temp;
    bool swapped = true;

    if (size < 2)
        return;

    while (swapped)
    {
        swapped = false;
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                print_array(array, size);
                swapped = true;
            }
        }
    }
}
