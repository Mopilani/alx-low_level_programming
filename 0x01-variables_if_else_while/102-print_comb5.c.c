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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 1; l < 10; l++)
				{

					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 70)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	/*printf("0123456789");*/
	putchar('\n');
	return (0);
}

