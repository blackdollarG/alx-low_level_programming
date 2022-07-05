#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: write a program that prints '_putchar' followed by a new line
 * Return: always 0
 */
int main(void)
{
	char dollar[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		_putchar(dollar[i]);
	}
	_putchar('\n');
	return (0);
}
