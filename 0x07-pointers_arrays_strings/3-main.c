#include "holberton. h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
Int main (void)
{Char *s = "hello, world";
 char *f = "oleh";
 unsigned int n;

 n = _strspn (s, f);
 printf("%u\n", n);
 return (0);}
