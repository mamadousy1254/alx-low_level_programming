#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * * main - prints the minimum number of coins
 * * to make change for an amount of money
 * * @argc: argument count
 * * @argv: argument vector
 * * Return: 0
 */
int main(int argc, char **argv)
{
	int value, x;

	x = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		x += value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		x += value / 10;
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		x += value / 5;
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		x += value / 2;
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		x += value / 1;
	}
	printf("%d\n", x);
	return (0);
}
