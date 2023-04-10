#include "main.h"
/**
* print_alphabet_x10 - print all alphabet in lowercase ten times
*/
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
