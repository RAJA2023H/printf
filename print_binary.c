#include "main.h"

/**
 * print_binary - print binary value of integer
 * @my_list: variadic arguments
 *
 * Return: count of printed characters
 */
int print_binary(va_list my_list)
{
	unsigned int n;
	unsigned int temp;
	int i, len = 0;
	char *ptr;

	n = va_arg(my_list, int);
	temp = n;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}

	while (temp > 0)
	{
		temp = temp / 2;
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (-1);
	for (i = len - 1; i >= 0; i--)
	{
		ptr[i] = (n % 2) + '0';
		n = n / 2;
	}
	write(1, ptr, len);

	free(ptr);
	return (len);
}
