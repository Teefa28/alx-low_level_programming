#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

pintf("Size of a char: %ld byte(s)\n", sizeof(a));
pintf("Size of an int: %ld byte(s)\n", sizeof(b));
pintf("Size of a long int: %ld byte(s)\n", sizeof(c));
pintf("Size of a long long int: %ld byte(s)\n", sizeof(d));
pintf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
