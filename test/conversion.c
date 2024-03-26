#include <stdlib.h>
#include "main.h"
/**
 * *_itoa - Convert int to string
 * @num: Number or num
 * @base: Base to convert
 * Return: Number converted to string
 */
char *_itoa(int num, int base)
{
	char buffer[1024];
	int n, i;

	if (base < 2 || base > 32)
		exit(1);
	n = _abs(num);
	i = 0;

	while (n)
	{
		int r = n % base;

		r = _abs(r);
		if (r >= 10)
			buffer[i] = 65 + (r - 10);
		else
			buffer[i] = 48 + r;
		i++;
		n = n / base;
	}

	if (i == 0)
	{
		buffer[i] = '0';
		i++;
	}
	if (num < 0 && base == 10)
	{
		buffer[i] = '-';
		i++;
	}
	buffer[i] = '\0';

	return (_reverse(buffer, i));
}
