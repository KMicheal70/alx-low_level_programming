#include "main.h"
/**
 *  _isdigit - check if c is a digit or not
 * @c: letter to check
 * Return: 1 if c is a digit. 0 if otherwise
 */

int _isdigit(int c)
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
