#include <stdio.h>
#include <unistd.h>

/*
 * main - prints a message to the standard error function using write()
 * @message: the message to be printed
 *
 * Return: 1
 */

int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, sizeof(message));
return (1);
}
