#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha += 1;
	}
	putchar('\n');

	return (0);
}
