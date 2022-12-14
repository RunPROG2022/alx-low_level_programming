#include "main.h"
/**
 * main - print _putchar
 * Return: success
 */
int main(void)
{
	char RunPROG[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(RunPROG[c]);
	}
	_putchar('\n');
	return (0);
}
