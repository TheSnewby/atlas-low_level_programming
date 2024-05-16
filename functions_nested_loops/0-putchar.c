#include <unistd.h>

/**
 * main - prints "_putchar \n" without libraries
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	write(1, str, sizeof(str));
	return (0);
}
