#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	char str_pc[8] = "_putchar";

	while (x < 8)
	{
		_putchar(str_pc[x]);
		x += 1;
	}
	_putchar('\n');

	return (0);
}
