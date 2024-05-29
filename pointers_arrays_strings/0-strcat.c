#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string being concatenated to
 * @src: string added to end of dest
 * 
 * Return: dest
*/

*_strcat(char *dest, char *src)
{
    int i = 0;
    int j;

    while (dest[i] != '\0')
        i++;

    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}