#include <stdio.h>
/**
 * main - prints 0 to 9 on a new line each
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int a;
	for (a = 0; a < 10; a++)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}
