#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located,
 * or -1 if value is not present
 * or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t min_step;
	size_t i;

	if (array == NULL)
	return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[step < size ? step : size - 1] < value)
	{
	prev = step;
	step += sqrt(size);
	if (prev >= size)
		return (-1);
	}

	min_step = step < size ? step : size;
	for (i = prev; i < min_step; i++)
	{
	if (array[i] == value)
		return (i);
	}
		return (-1);
}

