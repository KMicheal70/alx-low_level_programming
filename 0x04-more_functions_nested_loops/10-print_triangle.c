#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x <= size - i - 1; x++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
