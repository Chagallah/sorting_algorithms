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
 * bubble_sort - bubble sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Bubble sorting function
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
		for (j = 1; j < size; j++)
			if (array[j - 1] > array[j])
			{
				swap(&array[j - 1], &array[j]);
				print_array(array, size);
			}
}