#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked lists of integers in ascending
 * order
 * @list: head pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node;

	if (!(*list) || !list)
		return;
	current = (*list)->next;
	while (current)
	{
		next_node = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;
			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = next_node;
	}
}
