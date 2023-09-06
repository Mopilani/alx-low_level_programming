#include "main.h"
/**
 * *create_array - function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: integer input.
 * @c: char input.
 * Return: char pointer (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(c) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
