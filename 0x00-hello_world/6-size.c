#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of a int: %zu byte(s)\n", sizeof(int));
	printf("size of a long: %zu byte(s)\n", sizeof(long));
	printf("size of long long: %zu byte(s)\n", sizeof(long long));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
