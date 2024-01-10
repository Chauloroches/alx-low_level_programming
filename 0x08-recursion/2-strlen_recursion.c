#include "main.h"

/**
  * _strlen_recursion - length of a string.
  * @s:parameter
  * Return: 0
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}

