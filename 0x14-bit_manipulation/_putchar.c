#include "main.h"
#include <unistd.h>

/**
 * _putcahr - prints the character c to the stdout
 * @x: The character to print
 *
 * Return: If success 1.
 * On error, -1 is return , and errno will give the erro.
 */

int _putchar(char c)
{
	return (write(1, &x, 1));
}
