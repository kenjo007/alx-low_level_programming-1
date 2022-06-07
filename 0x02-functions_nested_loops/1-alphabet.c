#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Description: print alphabet prints alphabet in lowercase
 * Returns nothing
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
