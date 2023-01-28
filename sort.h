#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void quick_sort_extended(int *array, long int low, long int high, size_t size);
long int partition(int *array, long int low, long int high, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
void selection_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void _swap(listint_t *prmCurrent, listint_t *prmAfter, listint_t **prmList);
void counting_sort(int *prmArray, size_t prmSize);
void merge_sort(int *prmArray, size_t prmSize);
void sort(int *prmArray, int prmStart, int prmEnd);
void merge(int *prmArray, int prmStart, int prmMiddle, int prmEnd);
int partition_hoare(int *array, int low, int high, size_t size);
void quicksort_hoare(int *array, int low, int high, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
