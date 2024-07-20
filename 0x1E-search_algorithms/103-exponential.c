#include <math.h>
#include "103-exponential.h"

int binary_search(int *array, int left, int right, int value);

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
 * binary_search - Function to search in binary
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
