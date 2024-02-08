#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: parameter
 * @index: parameter
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	a = n & i;
	if (a == i)
		return (1);
	return (0);
}

