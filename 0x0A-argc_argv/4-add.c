#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
 * main - Entry point.
 * @argc: integer input.
 * @argv: char input.
 * Return: Alwayes 0 (Success).
 */
int main(int argc, char **argv)
{
	int add2 = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", add2);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			}
			add2 += atoi(argv[i]);
		}
		printf("%d\n", add2);
	}
	return (0);
}
