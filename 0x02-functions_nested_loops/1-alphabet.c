#include "main.h"
/**
 * print_alphabet - where all functions begins
 *
 * Return: returns zero if there are no errors at all
 */


	void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
