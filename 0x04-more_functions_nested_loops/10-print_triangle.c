#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: If size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int a, b;

	for (a = 1; a <= size; a++)
	{
	for (b = a; b < size; b++)
	{
	_putchar(' ');
	}

	for (b = 1; b <= a; b++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
}

