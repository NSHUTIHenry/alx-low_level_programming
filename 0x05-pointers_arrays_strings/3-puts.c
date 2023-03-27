#include "main.h"
/**
* _puts - do not fear computers
* @str: fear not
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
