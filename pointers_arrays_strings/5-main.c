#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "First, solve the problem. Then, write the code.";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}