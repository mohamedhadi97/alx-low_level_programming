#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area pointed
 * to by @s with the constant byte of @b
 *
 * @s: Pointer to a memory area
 *
 * @b: Value that is to fill up memory area @s
 *
 * @n: number of bytes of memory area @s to be filled with @b
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
}
