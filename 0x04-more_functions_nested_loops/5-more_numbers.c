#include "main.h"

/**
 * more_numbers - checks for digits 0 to 9
 * Return: On success 0
 */

void more_numbers(void)
{
int a, b;

for (a = 0; a < 10; a++)
for (b = 0; b < 15; b++)
{
if (a >= 10)
_putchar (b / 10 + '0');
_putchar (b % 10 + '0');
}
_putchar('\n');
}
