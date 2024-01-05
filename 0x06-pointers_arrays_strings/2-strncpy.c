#include "main.h"

/**
  * _strncpy - main function
  * @src: parameter
  * @dest: parameter
  * @n: parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		while (a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
		return (dest);
}
