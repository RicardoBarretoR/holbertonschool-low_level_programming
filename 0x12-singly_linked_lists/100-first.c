#include "lists.h"

void Startup_main(void) __attribute__((constructor));
/**
 *Startup_main - prints before the main
 */

void Startup_main(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
