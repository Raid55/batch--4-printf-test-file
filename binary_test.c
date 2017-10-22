#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	int number;
	int printed;

	number = 12398;
	/*---- Test cases for binary conversion ----*/
	printed = _printf("--> %b\n", number); /*Expected output: 11000001101110*/
	printf("printed chars: %d\n", printed); /*Expected output: 19*/
	return (0);
}
