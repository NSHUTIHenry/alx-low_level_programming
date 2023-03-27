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
_putchar(*s);
len--;
s--;
}
_putchar('\n');
}
