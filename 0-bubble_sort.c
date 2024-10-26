#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
  int current_index = 0;
    int next_index;
    int temp;
    int indexTracked = 0;
    bool isSorted = false;
    bool isSwappable;
    bool beingTracked;
    int count = 0;

    if (size < 2)
        return;

        while(isSorted == false)
        {
            count++;
            isSwappable = false;
            beingTracked = false;

            for (current_index = 0; current_index < size - 1; current_index++)
            {
                next_index = current_index + 1;
                if (array[current_index] > array[next_index])
                    {
                        indexTracked = current_index;
                        isSwappable = true;
                        beingTracked = true;
                        break;
                    }
            }
          
        while (beingTracked == true)
        {
          next_index = indexTracked + 1;
          if (next_index < size && array[indexTracked] > array[next_index])
          {
            temp = array[indexTracked];    
            array[indexTracked] = array[next_index];
            array[next_index] = temp;
            print_array(array, size);
            indexTracked++;
          }
          else
            beingTracked = false;
        }

        if (isSwappable == false)
        {
          isSorted = true;
        }
      }
}
