#include "dog.h"
/**
 * free_dog - frees allocated memory of a dog struct
 * @d: dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		printf("0\n");
	else
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
