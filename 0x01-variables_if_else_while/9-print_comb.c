#include <stdio.h>
/**
 * main - print allpossible single digit numbers
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
