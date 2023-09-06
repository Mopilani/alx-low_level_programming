#include "main.h"
/**
 * _strcmp - Entry point.
 * @s1: first input.
 * @s2: second input.
 * Description: function that compares two strings.
 * Return: Alwayes int.
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int x = 0;

	while (1)
	{
		if (s1[j] == '\0' && s2[j] == '\0')
		{
			break;
		}
		else if (s2[j] == '\0')
		{
			x = s1[j];
			break;
		}
		else if (s1[j] == '\0')
		{
			x = s2[j];
			break;
		}
		else if (s1[j] != s2[j])
		{
			x = s1[j] - s2[j];
			break;
		}
		else
		{
			j++;
		}
	}
		return (x);
}
