#include "main.h"

/**
  * _strncat  - the main function
  * @n: parameter
  * @src: parameter
  * @dest: parammeter
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{

	int a = strlen(dest);
	int b;

	for (b = 0; b < n && *src != '\0'; b++)
	{
		dest[a + 1] = *src;
		src++;
	}
		dest[a + 1] = '\0';
		return (dest);
}

