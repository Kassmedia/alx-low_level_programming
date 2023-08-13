#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: number of bytes
 * Return: pointer string
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);

	return(c);
}
