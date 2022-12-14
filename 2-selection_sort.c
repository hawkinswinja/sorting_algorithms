#include "sort.h"
/**
  * selection_sort - sort alist using selection method
  * @array: array to sort
  * @size: size of array
  * Return: nothing
  */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t min, n = 0;

	if (!array || size < 2)
		return;
	while (n < size - 1)
	{
		min = minimum(array, size, n);
		if (min != n)
		{
			temp = array[n];
			array[n] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		n++;
	}
}
/**
  * minimum - returns the smallest element in array
  * @array: array of integers
  * @n: size of the array
  * @index: start of array to check
  * Return: position of the smallest element
  */
int minimum(int *array, size_t n, size_t index)
{
	size_t m = index;
	int min = array[index], pos = index;

	while (m < n)
	{
		if (array[m] < min)
		{
			min = array[m];
			pos = m;
		}
		m++;
	}
	return (pos);
}
