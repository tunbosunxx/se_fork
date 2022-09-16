#include "main.h"

/**
 * print_most_numbers -> prints numbers from 0 to 9,
 * excluding 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		_putchar(x);
	}
	_putchar('10');
}
