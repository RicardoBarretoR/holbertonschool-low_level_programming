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

		if ((*d).name == NULL)
		{
			printf("name: (nil)");
		}
		if ((*d).owner == NULL)
		{
			printf("owner: (nil)");
		}
		else
		{
			printf("Name: %s\nAge: %1f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
