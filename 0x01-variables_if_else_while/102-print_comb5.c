#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program will assign a random number to the variable */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd, sd;

	for (fd = 0; fd <= 99; fd++)
	{
		for (sd = fd; sd <= 99; sd++)
		{
			if (sd != fd)
			{
				putchar((fd / 10) + 48);
				putchar((fd % 10) + 48);
				putchar(' ');
				putchar((sd / 10) + 48);
				putchar((sd % 10) + 48);

				if (fd != 98 || sd != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

