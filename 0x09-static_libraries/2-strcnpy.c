#include "main.h"
/**
 * *_strncpy - Entry point.
 * @dest: first input.
 * @src: second input.
 * @n: third input.
 * Description: function that copies a string.
 * Return: Alwayes char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
	dest[j] = '\0';
	}
	return (dest);
}
