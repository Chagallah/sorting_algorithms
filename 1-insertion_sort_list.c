#include "sort.h"
/**
 * insertion_sort_list - insertion sorting function
 * Return: void
 * @list: listint_t double ptr
 * Description: Insertion sorting function
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *aux_node = NULL, *tmp_node = NULL;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		aux_node = node->next;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			tmp_node = node->prev;
			tmp_node->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = tmp_node;
			node->prev = tmp_node->prev;
			tmp_node->prev = node;
			if (node->prev == NULL)
				*list = node;
			else
				node->prev->next = node;
			print_list(*list);
		}
		node = aux_node;
	}
}
