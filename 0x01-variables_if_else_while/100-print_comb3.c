#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 48; i < 58; i++)
	{
		for (x = i + 1; x < 58; x++)
		{
			putchar(i);
			putchar(x);
			if (i == 56)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
