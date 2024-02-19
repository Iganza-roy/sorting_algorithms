#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Orders subarray and places pivot
 * @array: Array to sort
 * @size: Size of array
 * @low: Starting index of subarray
 * @high: Ending index of subarray
 *
 * Return: Index of placed pivot
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - Sorts an array of integers in ascending order using quicksort
 * algorithm
 * @array: Array to sort
 * @size: Size of array
 * @low: Starting index of subarray
 * @high: Ending index of subarray
 *
 * Return: void
 */
void quicksort(int *array, size_t size, int low, int high)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = lomuto_partition(array, size, low, high);
		quicksort(array, size, low, pivot_idx - 1);
		quicksort(array, size, pivot_idx + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using quicksort
 * algorithm
 * @array: Array to sort
 * @size: Size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort(array, size, 0, size - 1);
}
