#include "sort.h"
/**
  * bubble_sort - sort algorithm that swaps two values
  * @array: array to sort
  * @size: size of array
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
