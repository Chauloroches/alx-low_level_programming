#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @a: value to check
 * Return: 1 isupper 0 notupper
 */

int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
