#include "main.h"

/**
  *_strcat -  function that concatenates two strings
  * @src: parameter
  * @dest: parameter
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
{
	a++;
}

while (src[b] != '\0')
{
	dest[b] = src[b];
	a++;
	b++;
}
dest[a] = '\0';
return (dest);
}
