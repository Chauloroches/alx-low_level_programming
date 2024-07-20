#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search -  Function that searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: If value is not present in array or if array is NULL
 * your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t curr = 0;

    if (array == NULL)
        return (-1);

    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    for (size_t i = prev; i < size && i <= curr; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

