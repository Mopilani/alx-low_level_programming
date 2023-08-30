#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer to char input.
 * Return: Alwayes void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
