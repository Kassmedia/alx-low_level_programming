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
    int a, b, mul;

    if (argc != 3)
    {
            printf("%s\n", "Error");
            return (1);
    }

    else
    {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    mul = a * b;
    printf("%d\n", mul);  
    }

    return (0);
}
