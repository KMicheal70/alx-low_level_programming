#include <stdio.h>
#include "main.h"
/* main - entry point
 * File: 101-natural.c
 * */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || i % 9 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
