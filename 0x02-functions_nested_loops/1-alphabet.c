#include "main.h"
/**
 *  * print_alphabet - Make the alphabet
 *   * Return: void
 */
void print_alphabet(void)
{
	char letter = 'c';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
