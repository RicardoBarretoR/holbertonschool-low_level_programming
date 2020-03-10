#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *@d: address struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)");
		else
			printf("Owner: %s\n",  d->owner);
	}
}
