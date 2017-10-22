#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	char *str;
	int number;

	/*---- Test cases for characters ----*/
	c = 'h';
	_printf("First letter of Holberton is %c, %d\n", c);


	/*---- Test cases for Numbers ----*/
	number = 19912507;
	_printf("%i, %d\n", number, number);


	/*---- Test cases for strings ----*/
	str = "Holberton"
	_printf("%s school\n", str);

	/*---- Test cases for NULL -----*/
	str = NULL;
	_printf("%s school\n", str);

	return (0);
}
