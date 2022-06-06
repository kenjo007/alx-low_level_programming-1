#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - my entry point
 * Description: assign a random number to variable 'n'
 * Return: 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
