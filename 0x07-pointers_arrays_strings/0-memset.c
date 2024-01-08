#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value used to fill the memory
  *
  * @s: Function paramater
  *
  * @n: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	 int i = 0;

	for (;n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
