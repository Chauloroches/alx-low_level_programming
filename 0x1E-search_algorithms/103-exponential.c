#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in a sorted
 * array of integers
 * using the Exponential search algorithm
 * array -  Pointer to the first element of the array to search in
 * size -  The number of elements in array
 * value -  The value to search for
 * Return - If value is not present in array or if array is NULL
 * your function must return -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
	return (-1);

	if (array[0] == value)
	return (0);

	i = 1;
	while (i < size && array[i] <= value)
	i = i * 2;

	return (binary_search(array, i / 2, (i < size ? i : size - 1), value));
}

/**
 * binary_search - Search for binary
 * array - pointer parameter
 * left - parameter
 * right - parameter
 * value - parameter
 * Return - Result -1
*/
int binary_search(int *array, int left, int right, int value)
{
	int mid;

	while (left <= right)
	{
	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
