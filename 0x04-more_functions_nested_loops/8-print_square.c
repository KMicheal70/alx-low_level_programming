#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int x;
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
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
