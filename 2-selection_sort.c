#include "sort.h"

/**
 * locate_min - finding min from current inde
 * @array: array to be looked for
 * @index: beginning index of search
 * @size: size of array
 * Return: int- index of min if present or
 * same given index
 */

int locate_min(int *array, int index, size_t size)
{
	int min, idx_min;
	int i;

	min = array[index];
	idx_min = index;
	for (i = index; i < (int)size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			idx_min = i;
		}
	}
	if (idx_min == index)
		return (-1);
	return (idx_min);
}

/**
 * selection_sort - Implementation of selection Sort Algrithm
 * @array: array to sort type int *
 * @size: size of provided array
 *
 * Return: (Void) Sorted Array
 */
void selection_sort(int *array, size_t size)
{
	int i;
	int min, tmp;

	for (i = 0; i < (int)size; i++)
	{
		min = locate_min(array, i, size);
		if (min != -1)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
