#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a list of int using the Insertion sort algorithm
 * @list: doubly linked list of integers
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *Node1;
	listint_t *Node2;
	listint_t *next_node;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next_node = current->next;
		Node1 = current;

		while (current->prev != NULL && current->prev->n > current->n)
		{
			Node2 = Node1->prev;

			if (Node2->prev != NULL)
				Node2->prev->next = Node1;
			else
				*list = Node1;

			Node1->prev = Node2->prev;
			Node2->next = Node1->next;

			if (Node1->next != NULL)
				Node1->next->prev = Node2;

			Node1->next = Node2;
			Node2->prev = Node1;

			print_list(*list);
		}
		current = next_node;
	}
}
