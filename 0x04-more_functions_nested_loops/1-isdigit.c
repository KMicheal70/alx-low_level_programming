#include "main.h"
/**
 *  _isupper - check if c is an uppercase letter or not
 * @c: letter to check
 * Return: 1 if character is upper. 0 if otherwise
 */

int _isupper(int c)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
