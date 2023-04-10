#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	int i;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
