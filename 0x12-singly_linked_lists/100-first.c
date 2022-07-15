#include <stdio.h>

void __attribute__((constructor)) bun(void);

/**
 * bun - Prints a string before main function is executed.
 */
void bun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
