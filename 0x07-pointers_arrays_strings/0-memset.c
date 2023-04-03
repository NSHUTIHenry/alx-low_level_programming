#include "main.h"
/**
 * _memset - function that fills memory with bytes
 * @s: Memory pointer
 * @b: The constant byte
 * @n: First n bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int (i);
	for (i = 0; n > 0; i++)
	{
		s(i) = b;
		n--;
	}
	return (s);
}
