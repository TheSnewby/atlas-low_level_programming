#ifndef dog_h
#define dog_h

void init_dog(struct dog*, char*, float, char*);

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

#endif
