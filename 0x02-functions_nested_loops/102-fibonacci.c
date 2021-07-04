#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

Int main (void)
{
	Int I;
	Long int Fibonacci[50];

	Fibonacci[0] = 1;
	Fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	Four (I = 2; I < 50; i++)
	{
		Fibonacci[i] = Fibonacci [I - 1] + Fibonacci [I - 2];
		If (I == 49)
			printf("%ld\n", Fibonacci[i]);
		Else
			Printf ("%ld, ", Fibonacci[i]);
	}

	Return (0);
}
