#include "sort.h"

/**
 * shell_sort - Sorts an array of integers using the Shell sort algorithm
 *              with the Knuth sequence
 *
 * @array: The array of integers to be sorted
 * @size: The size of the array
 * Returnn: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t increment = 1, i, j;
	int tmp;

	if (!array || size < 2)
		return;

	while (increment < size / 3)
		increment = increment * 3 + 1;

	while (increment >= 1)
	{
		for (i = increment; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= increment && array[j - increment] > tmp; j -= increment)
				array[j] = array[j - increment];
			array[j] = tmp;
		}
		increment = (increment - 1) / 3;
		print_array(array, size);
	}
}
