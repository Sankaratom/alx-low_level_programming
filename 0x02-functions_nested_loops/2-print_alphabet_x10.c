#include "holberton.h"
#include "_putchar.c"
/**
*print_alphabet_x10 - prints small letter alphabets 10 times
*/
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
