#include <stdio.h>
#include <math.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int maximum;
	long int i;

	a = 612852475143;
	maximum = -1;

	while (a % 2 == 0)
	{
	maximum = 2;
	a /= 2;
	}

	for (i = 3; i <= sqrt(a); i = i + 2)
	{
	while (a % i == 0)
	{
	maximum = i;
	a = a / i;
	}
	}

	if (a > 2)
	maximum = a;

	printf("%ld\n", maximum);

	return (0);
}
