#include "sort.h"
/**
 * merge_sort - function that sorts an array of integers
 * in ascending order using the Merge sort algorithm
 * @array: pointer to the array to sort
 * @size: size of the array
 * Return: void
 */

void merge_sort(int *array, size_t size)
{
    if (size < 2)
        return;

    size_t mid = size / 2;
    size_t left_size = mid;
    size_t right_size = size - mid;

    int *left_array = (int *)malloc(left_size * sizeof(int));
    int *right_array = (int *)malloc(right_size * sizeof(int));

    for (size_t i = 0; i < left_size; i++)
        left_array[i] = array[i];
    for (size_t i = 0; i < right_size; i++)
        right_array[i] = array[i + left_size];

    merge_sort(left_array, left_size);
    merge_sort(right_array, right_size);

    merge(left_array, right_array, array, left_size, right_size);

    free(left_array);
    free(right_array);
}

/**
 * merge - function that sorts an array of integers
 * in ascending order using the Merge sort algorithm
 * @array: pointer to the array to sort
 * @size: size of the array
 * Return: void
 */

void merge(int *left_array, int *right_array, int *array, size_t left_size, size_t right_size)
{
    size_t i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size)
    {
        if (left_array[i] <= right_array[j])
            array[k++] = left_array[i++];
        else
            array[k++] = right_array[j++];
    }

    while (i < left_size)
        array[k++] = left_array[i++];
    while (j < right_size)
        array[k++] = right_array[j++];

    printf("Merging...\n[left]: ");
    print_array(left_array, left_size);
    printf("[right]: ");
    print_array(right_array, right_size);
    printf("[Done]: ");
    print_array(array, left_size + right_size);
}
