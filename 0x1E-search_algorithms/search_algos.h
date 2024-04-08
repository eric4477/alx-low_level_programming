#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * search_algorithm - Search for a value in an array using a specified search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int search_algorithm(int *array, size_t size, int value);

#endif /* SEARCH_ALGORITHM_H */

