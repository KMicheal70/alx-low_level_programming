#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	int i;
	int x;

	x = 1;
	for (i = 97; i < 123; i++)
	{
		if (c == i)
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
	}
	return (x);
}
