#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: character
 * @needle: pointer
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack !='\0'; haystack++)
{
char *p = haystack;
char *j = needle;

while (*p == *j && *p != '\0')
{
p++;
j++;
}

if (*j == '\0')
return (haystack);
}
return (0);
}
