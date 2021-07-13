#include "holberton.h"
#include <stdlib.h>
/**
* create_array - array creator
* @size: size of the array
* @c: initial character
*Description:
*Return: string
*/
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
unsigned int i = 0;
char *str = (char *) malloc(size);
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
