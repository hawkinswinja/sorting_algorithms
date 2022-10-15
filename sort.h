#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
listint_t *swap_node(listint_t *node, listint_t **list);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int minimum(int *, size_t, size_t);
void quick_sort(int *array, size_t size);
void qs(int *array, ssize_t first, ssize_t last, int size);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void swap(int *array, ssize_t item1, ssize_t item2);
#endif /*SORT_H*/
