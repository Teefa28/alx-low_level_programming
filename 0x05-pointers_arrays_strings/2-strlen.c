#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: string to be counted
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int p;
	int count = 0;

	for (p = 0 ; s[p] != '\0' ; p++)
		count++;
	return (count);


}
