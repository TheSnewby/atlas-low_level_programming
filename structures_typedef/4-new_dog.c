#include "dog.h"
/**
 * new_dog - function creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int size_name;
	int size_owner;
	int i;
	dog_t *ptr_newdog = malloc(sizeof(dog_t));
	char *name_copy;
	char *owner_copy;

	if (ptr_newdog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	size_name = i + 1;
	for (i = 0; owner[i] != '\0'; i++)
		;
	size_owner = i + 1;
	ptr_newdog->age = age;
	ptr_newdog->name = malloc(size_name);
	ptr_newdog->owner = malloc(size_owner);
	name_copy = malloc(size_name);
	owner_copy = malloc(size_owner);
	if ((*ptr_newdog).name == NULL || (*ptr_newdog).owner == NULL)
	{
		free((*ptr_newdog).name);
		free((*ptr_newdog).owner);
		free(ptr_newdog);
		return (NULL);
	}
	for (i = 0; i <= size_name; i++)
	{
		(*ptr_newdog).name[i] = name[i];
		name_copy[i] = name[i];
	}
	for (i = 0; i <= size_owner; i++)
	{
		ptr_newdog->owner[i] = owner[i];
		owner_copy[i] = owner[i];
	}
	return (ptr_newdog);
}
