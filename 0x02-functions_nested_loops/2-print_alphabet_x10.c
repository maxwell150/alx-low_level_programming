#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		for (int x = 97; x <= 122; x++)
			_putchar(x);
		_putchar('\n');
		count++;
	}
	return (0);
}

