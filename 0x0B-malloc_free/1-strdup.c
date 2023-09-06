#include "main.h"
/**
 * *_strdup - Entry point.
 * @str: input pointer to char.
 * Return: pointer (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *array;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size = i;
	array = malloc(sizeof(*str) * (size + 1));
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
