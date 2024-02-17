#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: integers to be sorted
 * @size: size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size);
{
	int i, j, tmp;

	for (i = 0; i < size, i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if array[j] > array[j + 1]
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			print_array(array, size)
		}
	}
}
