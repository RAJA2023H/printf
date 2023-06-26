#include "main.h"

/**
 * print_binary - print binary value of integer
 * @my_list: variadic arguments
 *
 * Return: count of printed characters
 */
int print_binary(va_list my_list)
{
	int c = va_arg(my_list, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
