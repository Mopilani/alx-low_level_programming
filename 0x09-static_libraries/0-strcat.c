#include "main.h"
/**
 * *_strcat - Entry point.
 * @dest: first input.
 * @src: second input.
 * Description: function that concatenates two strings..
 * Return: Alwayes char.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int y;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (y = 0; src[y] ; y++)
	{
		dest[i++] = src[y];
	}
	return (dest);
}
