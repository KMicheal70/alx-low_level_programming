#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int i;
	int x;
	int z;
	char limit;

	for (i = 0; i < 10; i++)
	{
		limit = '9';
		for (x = '0'; x < '2'; x++)
		{
			for (z = '0'; z <= limit; z++)
			{
				if (x == '1')
				{
					_putchar(x);
					limit = '4';
				}
				_putchar(z);
			}
		}
		_putchar('\n');
	}
}
