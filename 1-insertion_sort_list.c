#include "sort.h"
/**
  * insertion_sort_list - sorts a list of integers using insertion sort
  * @list: list of integers to sort
  * Return: nothing
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	
	printf("here");
	curr = *list;
	while (curr)
	{
		while (curr->prev)
		{
			if (curr->n < (curr->prev)->n)
			{
				if (curr->next)
					(curr->prev)->next = curr->next;
				else
					(curr->prev)->next = NULL;
				(curr->next)->prev = curr->prev;
				curr->next = curr->prev;
				if ((curr->prev)->prev)
				{
					curr->prev = (curr->prev)->prev;
					(curr->prev)->prev = curr;
				}
				else
				{
					curr->prev = NULL;
					*list = curr;
				}
				print_list(*list);
			}
		}
		curr = curr->next;
	}
}

