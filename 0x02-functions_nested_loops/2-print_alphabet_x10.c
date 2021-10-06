#include "main.h"

/*
 * print_alphabet_x10 - print alphabet 10 times
 * print_alphabet - print lowercase alphabet
 * execute a program that:
 * first loop print x10 alphabet \n
 * second for print alphabet a-z
 *
 */
/*
 * print_alphabet_x10 function void
 */
void print_alphabet_x10(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{

		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
