#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i;
	int x;
	int y;
	int z;
	int four;

	four = '9'
	for (i = '0'; i < '3'; i++)
	{
		for (x = '0'; x < four; x++)
		{
			for (y = '0'; y < '6'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (i == 2)
					{
						four = '4';
					}
					_putchar(i);
					_putchar(x);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
