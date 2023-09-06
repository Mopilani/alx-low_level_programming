#include "main.h"
/**
 * *_memset - Fills Memory.
 * @s: a pointer input.
 * @b: a char input.
 * @n: an integer input.
 * Return: Alwayes char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
