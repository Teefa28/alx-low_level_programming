#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	pintf("Size of a char: %ld byte(s)\n", sizeof(char));
	pintf("Size of an int: %ld byte(s)\n", sizeof(int));
	pintf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	pintf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	pintf("Size of a float: %ld byte(s)\n", sizeof(float));
	return 0;
}
