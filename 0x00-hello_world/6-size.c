#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int LongintType;
	long long int LLintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", charType);
	printf("Size of an int: %zu byte(s)\n", intType);
	printf("Size of a long int: %zu byte(s)\n", LongintType);
	printf("Size of a long long int: %zu byte(s)\n", LLintType);
	printf("Size of a float: %zu byte(s)\n", floatType);
}
