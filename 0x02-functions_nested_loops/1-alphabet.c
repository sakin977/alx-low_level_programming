#include "holberton.h"

/**
 * print_alphabet - described
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: void.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
