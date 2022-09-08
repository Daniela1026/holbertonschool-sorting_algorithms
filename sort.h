#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>


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

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
listint_t *create_listint(const int *array, size_t size);
int main(void);
void insertion_sort_list(listint_t **list);
void sorts_array(int *a, int *b);
void selection_sort(int *array, size_t size);
void _swap(int *a, int *b);
int _split(int *arr, int min, int last, size_t size);
void quick_sort_array(int *arr, int min, int last, size_t size);
void quick_sort(int *array, size_t size);

#endif
