#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
	printf("Age: %f\n", (*d).age); /* == NULL ? "(nil)" : (*d).age); */
	printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
