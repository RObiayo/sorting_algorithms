#include "sort.h"

/**
 * swap - swap two int
 * @a: int
 * @b: int
 * Return: (void) Swaped int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - partition of an array and using pivot
 * @array: array
 * @low: int
 * @high: int
 * @size: size of array
 * Return: int- index of pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}
/**
 * lomuto_qsort - Sorting an array concurrenntly
 * @array: array to be sorted
 * @low: lowest value of the array
 * @high: highest value of the array
 * @size: Array size
 * Return: void
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - sort algorithms using lomuto partition
 * @array: Array to be sorted
 * @size: Array size
 * Return: void- sorted array
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
