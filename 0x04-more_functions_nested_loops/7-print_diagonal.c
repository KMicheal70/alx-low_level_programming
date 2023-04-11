#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x <= i-1; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
