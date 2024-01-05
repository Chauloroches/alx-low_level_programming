#include "main.h"
#include <stdio.h>

/**
 * print_buffer - main function
 * @b: parameter.
 *@size: parameter
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int a;
	int i;
	int z;

	a = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (a < size)
	{
	i = size - a < 10 ? size - a : 10;
	printf("%08x: ", a);
	for (z = 0; z < 10; z++)
	{
	if (z < i)
	printf("%02x", *(b + a + z));
	else
	printf("  ");
	if (z % 2)
	{
	printf(" ");
	}
	}
	for (z = 0; z < i; z++)
	{
	int c = *(b + a + z);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	a += 10;
	}
}

