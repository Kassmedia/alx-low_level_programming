#include "variadic_functions.h"

/**
 * sum_them_all -  adds all the parameters passed to it
 * @n: number of args passed
 *
 * Return:  sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
    int sum =0;
    unsigned int i;
    va_list ptr;

    va_start(ptr, n);
    if (n != 0) 
    {
        for (int i=0; i < n; i++)
            sum = sum + va_arg(ptr, const unsigned int);
    }
    va_end(ptr);
    return (sum);

}
