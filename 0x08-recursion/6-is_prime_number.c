#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  if an integer is a prime number or not
 * @n: parameter
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime -  prime recursively
 * @n: parameter
 * @a: parameter
 * Return: 1 otherwise 0
 */
int actual_prime(int n, int a)
{
	if (a == 1)
	return (1);
	if (n % a == 0 && a > 0)
	return (0);
	return (actual_prime(n, a - 1));
}
