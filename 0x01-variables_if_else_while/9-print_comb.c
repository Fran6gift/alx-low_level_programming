#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 48;
	int c = 44;

while (p <= 57)
{
	putchar(p);
	if (p != 57)
	{
		putchar(c);
		putchar(32);
	}
	p += 1;
}
putchar('\n');

return (0);
}

