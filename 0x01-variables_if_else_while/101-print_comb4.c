#include<stdio.h>
/**
* main - Print combinations of two digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int hundreds, tens, ones;
for (hundreds = 0; hundreds <= 9; hundreds++)
{
for (tens = hundreds + 1; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');
if (hundreds * 100 + tens * 10 + ones < 789)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}






