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

	for (i = 48; i < 58; i++)
	{
		for (x = i + 1; x < 58; x++)
		{
			for (z = x + 1; z < 58; z++)
			{
				putchar(i);
				putchar(x);
				putchar(z);
				if (i == 55)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
