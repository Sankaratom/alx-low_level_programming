#include "holberton.h"
#include <stdlib.h>
/**
* length - string dupilicator
* @str: string to be cloned
*Description:
*Return: a copy of the string
*/
int length(char *str)
{
int j = 0;
while (str[j])
{
j++;
}
return (j);
}
/**
* _strdup - string dupilicator
* @str: string to be cloned
*Description:
*Return: a copy of the string
*/
char *_strdup(char *str)
{
int j = 0;
char *s = (char *) malloc(length(str));

while (str[j])
{
s[j] = str[j];
j++;
}
return (s);
}
