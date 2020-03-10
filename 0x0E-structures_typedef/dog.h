#ifndef DOG_T
#define DOG_T
/**
 *struct dog_t - define a new type
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

typedef struct dog dog_t;

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog;

#include <stdio.h>
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
*dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);
*/
#endif
