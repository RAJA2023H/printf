#include "main.h"
/**
 * print_cent - print literal character %
 * @my_list: variadic argument
 *
 * Return: count of printed character %
 */
int print_cent(va_list my_list)
{
	(void)my_list;
	write(1, "%", 1);
	return (1);
}
