#include "sort.h"
/**
  * insertion_sort_list - sorts a list of integers using insertion sort
  * @list: list of integers to sort
  * Return: nothing
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a list
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *bfr = node->prev, *current = node;

	bfr->next = current->next;
	if (current->next)
		current->next->prev = bfr;
	current->next = bfr;
	current->prev = bfr->prev;
	bfr->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
