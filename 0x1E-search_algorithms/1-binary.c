#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - An array of integers
 * @array: Array to be printed
 * @left: Left index of the subarray to print
 * @right: Right index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	printf("%d", array[i]);
	if (i < right)
		printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for
 * Return: f value is not present in array or if array is NULL,
 * your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
	return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
	print_array(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}

	return (-1);
}

