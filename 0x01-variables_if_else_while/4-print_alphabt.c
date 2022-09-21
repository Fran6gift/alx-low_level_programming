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

	while (sl <= 'z')
	{
		if (sl == 'e' || sl == 'q')
		{
			sl += 1;
		}
		else
		{
			putchar(sl);
			sl += 1;
		}
	}
	putchar('\n');

	return (0);
}
