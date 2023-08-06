#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
