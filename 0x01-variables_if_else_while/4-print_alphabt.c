#include <stdio.h>

/**
 * main - my entry point
 * Description: to print alphabet except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != 'e' && alphabet != 'q');
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
