#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
