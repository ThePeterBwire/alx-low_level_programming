#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints alphebet in lowercase followed by a newline'
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}
