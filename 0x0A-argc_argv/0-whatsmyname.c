#include<stdio.h>
/**
 * main -Entry point.
 * @argc: integer input.
 * @argv: array string input.
 * Return: Alwayes 0 Success.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
