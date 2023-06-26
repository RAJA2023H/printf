#include "main.h"
void _getNumber(int a);
/**
 * print_int - print integer
 * @my_list: variadic arguments
 *
 * Return: count of printed characters
 */

int print_int(va_list my_list)
{
	int count = 1, temp = 0;
	unsigned int n = 0;

	n = va_arg(my_list, int);
	temp = n;

	if (temp < 0)
	{
		write(1, "-", 1);
		temp = temp * -1;
		n = temp;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	_getNumber(temp);

	return (count);
}
/**
 * _getNumber - print number.
 * @n: an integer.
 *
 * Return: void.
 *
 */
	void _getNumber(int n)
{
	unsigned int a, b;

	a = n;
	b = a % 10 + '0';

	if (a / 10)
		_getNumber(a / 10);

	write(1, &b, 1);
}
