#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long index = 0;
	while (index < 59) 
	{
		putchar(str[index]);
		index++;
	}
	/*for (int i = 0; i < sizeof(str); i++) {
	*	putchar(str[i]);
	*
	* putchar('and that piece of art is useful - Dora Korpar, 2015-10-19');*/
    return (1);
}