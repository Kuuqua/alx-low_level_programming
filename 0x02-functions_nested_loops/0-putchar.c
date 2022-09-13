#include "putchar.h"
/**
 * main - print "_putchar" followed by a new line
 * Description: You are not allowed to include standard librairies.
 * Return: 0
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
