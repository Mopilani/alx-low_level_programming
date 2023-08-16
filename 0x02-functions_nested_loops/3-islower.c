#include"main.h"

/**
 * _islower - Entry point.
 * Description: This is a seperate file for the function.
 * @c: is the integer input for the function.
 * Return: 1 if lower case , otherwise 0 .
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
