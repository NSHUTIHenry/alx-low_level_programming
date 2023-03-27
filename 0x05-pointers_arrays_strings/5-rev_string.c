#include "main.h"
/**
 * rev_string - function to reverses a string
 * @s: reverse
 * Return: length
 */
void rev_string(char *s)
{
int len = 0;

while (*s != '\0')
{
len--;
s--;
}
return (len);
}
