#include "main.h"

/**
 * _pow - entry point
 * @i: base of the exponent
 * @k: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int i, unsigned int k)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= k; a++)
		num *= i;
	return (num);
}

/**
 * print_binary - the binary representation of a number.
 * @n: parameter
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char c;

	c = 0;
	a = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || a == 1)
		{
			_putchar('0');
		}
		a >>= 1;
	}
}

