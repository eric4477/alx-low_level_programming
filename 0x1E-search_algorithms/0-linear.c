#include <stdio.h>

/**
 * linear_search - Search for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    int i;
    
    if (array == NULL)
        return (-1); // Return -1 if array is NULL

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i); // Return the index if value is found
    }

    return (-1); // Return -1 if value is not found
}
