#include "holberton.h"
/**
* more_numbers - prints numbers and a new line
*Description:
*Return:
*/
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + 48);
}
if (i >= 0)
{
_putchar((i % 10) + 48);
}
}
_putchar('\n');
}
}
