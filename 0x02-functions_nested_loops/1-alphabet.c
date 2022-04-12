#include "main.h"
/**
 * main - where all functions begins
 iiii*
 * Return: returns zero if there are no errors at all
 */

int main(void)
{
	void print_alphabet(void);
	char alphabet;

	for (alphabet ='a'; alphabet <= 'z'; alphabet++)
	{
_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
