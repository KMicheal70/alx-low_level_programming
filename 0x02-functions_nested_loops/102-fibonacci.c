#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'first 50 fibonacci'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int x;
	int y;
	int z;

	x = 1;
	y = 2;
	printf("%d, ", x);
	printf("%d, ", y);
	for (num = 3; num < 51; num++)
	{
		z = y;
		y += x;
		printf("%d", y);
		if (num == 50)
		{
			break;
		}
		printf(", ");
		x = z;
	}
	printf("\n");
	return (0);
}
