#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: parameter
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit = 0;
	unsigned long int b;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		b = exclusive >> i;
		if (b & 1)
			bit++;
	}

	return (bit);
}
