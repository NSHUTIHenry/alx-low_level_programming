#include "main.h"
/**
 * rev_string - function to reverses a string
 * @s: reverse
 */
void rev_string(char *s)
{
int len = 0;
char *t = s;
char tmp;

while (*t != '\0')
{
len++;
t++;
}
t--;
while (s < t)
{
tmp = *s;
*s++ = *t;
*t-- = tmp;
}
}
