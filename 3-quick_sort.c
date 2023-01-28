#include "sort.h"
/**
 * swap - helper function
 * Return: void
 * @a: int ptr
 * @b: int ptr
 * Description: Swap two elements in an array
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition - helper function
 * Return: long int
 * @array: int array
 * @low: long int
 * @high: long int
 * @size: size_t
 * Description: Retrieves a new portion of an array
 */
long int partition(int *array, long int low, long int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort - caller to quick sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Caller to quick sorting function
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_extended(array, 0, size - 1, size);
}
/**
 * quick_sort_extended - Quick sorting function implementation extended
 * Return: void
 * @array: int ptr
 * @low: size_t portion init
 * @high: size_t portion end
 * @size: size_t
 * Description: Recursive extended implementation of Quick sort
 */
void quick_sort_extended(int *array, long int low, long int high, size_t size)
{
	long int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_extended(array, low, pivot - 1, size);
		quick_sort_extended(array, pivot + 1, high, size);
	}
}
