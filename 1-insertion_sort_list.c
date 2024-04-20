#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list using the
 * 			 Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 * Return: NULL.
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	listint_t *current = (*list)->next;
	while (current != NULL)
	{
		listint_t *temp = current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
