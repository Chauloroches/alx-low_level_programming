#include "main.h"

/**
  * reverse_array - main fanction
  * @a: parameter
  * @n: parameter
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int m, r;

	for (m = 0; m < n--; m++)
	{
	r = a[m];
	a[m] = a[n];
	a[n] = r;
	}
}

