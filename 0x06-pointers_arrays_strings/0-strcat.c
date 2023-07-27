#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int l;
	int b;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[l] = src[b];
		l++;
		b++;
	}
	dest[l] = '\0';
	return (dest);
}
