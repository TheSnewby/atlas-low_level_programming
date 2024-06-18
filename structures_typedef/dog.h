#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct dog - dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: longer dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog*, char*, float, char*);
void print_dog(struct dog *);

#endif
