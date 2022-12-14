#include "sort.h"
/**
* insertion_sort_list - function that sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
* @list: Character listin_t
*
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *swap;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;
	while (node != NULL)
	{
		swap = node->next;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			node->prev->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->next->prev;
			node->next->prev = node;
			if (node->prev == NULL)
				*list = node;
			else
				node->prev->next = node;
			print_list(*list);
		}
		node = swap;
	}
}
