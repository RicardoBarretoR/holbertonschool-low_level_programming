#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *@d: address struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	}
	if ((*d).name == NULL)
	{
		printf("Name : (nil)");
	}
	else
	{
		printf("Name : %s\n", (*d).name);
	}
	if ((*d).age == '\0')
	{
		printf("Age : (nill)");
	}
	else
	{
		printf("Age : %1f\n", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("Owner : (nill)");
	}
	else
	{
		printf("Owner : %s\n", (*d).owner);
	}
}