#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sl = 'a';
	int bg = 'A';

	while (sl <= 'z')
	{
		putchar(sl);
	        sl += 1;
	}
	while (bg <= 'Z')
	{
		putchar(bg);
		bg += 1;
	}
	putchar('\n');

	return (0);
}



