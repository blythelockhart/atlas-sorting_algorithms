#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * Return: NULL.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
