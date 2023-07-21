#include "sort.h"

/**
 *bubble_sort - sorts an array of ints in ascending orde
 *@array: array to be sorted
 *@size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int n;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
				print_array(array, size);
			}
		}
	}
}
