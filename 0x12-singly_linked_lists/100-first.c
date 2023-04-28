#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 * for alx project
 */
void first(void)
{
	printf("You're beat! and yet,");
	printf("you must allow,");
	printf("\nI bore my house upon my back!\n");
}
