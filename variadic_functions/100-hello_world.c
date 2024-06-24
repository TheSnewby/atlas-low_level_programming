#include <unistd.h>
/**
 * main - prints hello world
 *
 * Return: 0
 */

int main(void)
{
	write(1, "Hello, World", 12);
	return (0);
}
