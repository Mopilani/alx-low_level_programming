#include "main.h"
/**
 * *_strncat - Entry point.
 * @dest: first input.
 * @src: second input.
 * @n: third input.
 * Description: function that concatenates two strings..
 * Return: Alwayes char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
