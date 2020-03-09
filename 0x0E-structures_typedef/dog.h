#ifndef DOG_H
#define DOG_H
/**
 *struct dog - define a new type
 *@name: name of dog
 *@age: old dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
*dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);
*/
#endif