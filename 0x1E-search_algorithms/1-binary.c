#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1); // Return -1 if array is NULL

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid; // Return the index if value is found
        else if (array[mid] < value)
            left = mid + 1; // Search the right half
        else
            right = mid - 1; // Search the left half
    }

    return (-1); // Return -1 if value is not found
}
