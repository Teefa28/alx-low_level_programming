#include "main.h"

/**
 * print_line - checks for digits 0 to 9
 *@n: number of times parameter should be printed
 * Return: On success 0
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
_putchar('\n');
}
}
}
