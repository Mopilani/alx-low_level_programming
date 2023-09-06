#include<stdio.h>
/**
 * main - Entry point.
 * @argc: integer input.
 * @argv: char input.
 * Return: Alwayes 0 (Success).
 */
int main(int argc, char *argv[])
{
	argv[argc] = NULL;
	printf("%d\n", argc - 1);
	return (0);
}
