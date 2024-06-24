#include <unistd.h>
/**
 * main - prints hello world
 *
 * Return: 0
 */

int main(void)
{
	write(1, "Hello, World\n", 13);
	return (0);
}
