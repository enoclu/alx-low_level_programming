#include "main.h"
/**
 * main - this is the main main
 * Return: 0
 * void print_alphabet_x10 - alphabet will be printed 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char alp;

	for (i = 0; i < 10; i++)
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);

	_putchar("\n");

	return (0);
}
