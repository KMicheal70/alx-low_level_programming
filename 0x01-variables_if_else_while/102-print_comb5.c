#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;
	int z;
	int c;

	for (i = 48; i < 58; i++)
	{
		for (x = 48; x < 58; x++)
		{
			for (z = i; z < 58; z++)
			{
				for (c = x + 1; c < 58; c++)
				{
				putchar(i);
				putchar(x);
				putchar(32);
				putchar(z);
				putchar(c);
				if (i == 57 && x == 56)
				{
					break;
				}
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
