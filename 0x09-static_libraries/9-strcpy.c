#include"main.h"
/**
 * *_strcpy - Entry point.
 * @dest: input1.
 * @src: input2.
 * Description: unction that copies the string pointed to by src.
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{}
	for (j = 0; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
